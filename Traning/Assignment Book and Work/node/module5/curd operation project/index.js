//i app
const express = require('express')
const app = express()
const session = require('express-session')
const { commonRouter } = require("./router")

//session
app.use(session({
    secret: "lykenMeet",
    resave: false,
    saveUninitialized: true
}))

//db
const mongoose = require('mongoose')
mongoose.connect('mongodb://localhost:27017/curd')
.then(()=>{
    console.log('db connected!');
})
.catch((err)=>{
    console.log('err',err);
})

//token
const jwt = require('jsonwebtoken');

//router
app.use('/',commonRouter)

//start server
const PORT = 3000
app.listen(PORT,()=>{
    console.log('server is running on Port: '+PORT);
})
