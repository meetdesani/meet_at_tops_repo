const mongoose = require('mongoose')
console.log('call inside the model');

const userSchema = new mongoose.Schema({
    username: String,
    password: String,
    tokens: [String]
  });

module.exports = mongoose.model('users',userSchema)