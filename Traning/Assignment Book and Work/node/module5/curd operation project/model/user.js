const mongoose = require('mongoose')

const userSchema = new mongoose.Schema({
    username: String,
    password: String,
    tokens: [String]
  });

module.export = mongoose.model('user',userSchema)