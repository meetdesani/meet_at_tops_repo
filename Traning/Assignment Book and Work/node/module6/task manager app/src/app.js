const express = require('express')
const app = express()

const path = require('path')

//dotenv
require('dotenv').config()
const port = process.env.PORT

//database
const mongoose = require('mongoose')
mongoose.connect('mongodb://localhost:27017/taskManageApp')
.then(()=>{
    console.log('DB connected!')
})
.catch((err)=>{
    console.log(err);
})

//session
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

//to load template
const hbs = require('hbs')
app.use(express.static('public'))
app.set('view engine', 'hbs')
hbs.registerPartials(__dirname+"/../views/partials")

//body parser for post method
const bodyParser = require('body-parser')
app.use(bodyParser.urlencoded({ extended: true }))
app.use(bodyParser.json()) 

//router
const { common_router } = require('../router')
app.use('/',common_router)

//server is running
app.listen(3000,()=>{
    console.log('Server is running on Port 3000');
})