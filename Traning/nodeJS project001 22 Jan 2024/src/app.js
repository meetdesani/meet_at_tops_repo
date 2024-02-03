const express = require('express')
const app = express()
const path= require('path')

require('dotenv').config();

const port = process.env.PORT

const mongoose = require('mongoose')

const bodyParse = require('body-parser')
app.use(bodyParse.urlencoded({extended:true}))
app.use(bodyParse.json())

const hbs = require('hbs')
app.use(express.static('public'))
app.set('view engine', 'hbs')
hbs.registerPartials(__dirname + '/../view/partials')





mongoose.connect('mongodb://localhost:27017/nodeJS project001 22 Jan 2024').then(()=>{
    console.log('DB connected successfully!');
}).catch(err=>{
    console.log(err);
})

const { common_route } = require('../router')
app.use('/',common_route)

app.listen(port,()=>{
    console.log('Server is running on Port 3000.');
})


module.exports = app;


// const express = require('express'); // express for routing 
// const app = express();
// const path = require('path'); // for base url

// const mongoose = require("mongoose"); // mongoose database  
// // const session = require('express-session');

// const bodyParser = require("body-parser"); // for post request

// app.use(bodyParser.urlencoded({ extended: true })) // for post request data
// app.use(bodyParser.json()) // for post request data to json

// const port = process.env.PORT;
// const hbs = require('hbs') // for view files
// app.use(express.static('public')) // access public folder by default


// // HBS helper for JSON.stringify in hbs START 
// hbs.registerHelper('json', function(context) {
//     return JSON.stringify(context);
// });
// // HBS helper for JSON.stringify in hbs END

// app.set('view engine', 'hbs') //enable template engine
// hbs.registerPartials(__dirname + "/../views/partials") // template engine partials header footer


// // mongoose Database Connection START
// mongoose.connect("mongodb://127.0.0.1:27017/Dec14NodeJSFT").then(() => {
//     console.log("Db connected successfully !!!")
// }).catch(err => {
//     console.log(err);
// })
// // mongoose Database Connection END


// const { common_route } = require('../router'); // load router

// app.use('/', common_route);

// app.listen(3000, () => {
//     console.log(`Server is listening on port ${3000}`);
// });

// module.exports = app;