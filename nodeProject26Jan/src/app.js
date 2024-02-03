const express = require('express')
const app = express()

const path = require('path')

require('dotenv').config()
const port = process.env.PORT

const mongoose = require('mongoose')
mongoose.connect('mongodb://localhost:27017/nodeProject26Jan')
.then(()=>{
    console.log('DB connected!')
})
.catch((err)=>{
    console.log(err);
})

const session = require('express-session')
app.use(session({
        secret: 'testing',
        resave: false,
        saveUninitialized: true,
        cookie: {
            secure: false
        }
    })
)

const hbs = require('hbs')
app.use(express.static('public'))
app.set('view engine', 'hbs')
hbs.registerPartials(__dirname+"/../views/partials")

const bodyParser = require('body-parser')
app.use(bodyParser.urlencoded({ extended: true }))
app.use(bodyParser.json())

const { common_route } = require('../router')
const { log } = require('console')
app.use('/',common_route)

app.listen(port,()=>{
    console.log('Server is running on Port: ',port);
})