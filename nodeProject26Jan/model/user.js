const mongoose = require("mongoose");
const bcrypt = require('bcrypt');

const userSchema = new mongoose.Schema({
    fname: String,
    Lname: String,
    email: String,
    password: String,
    otp: Number,
    isEmailConfirmed: Number,
    token: {
        type: String
    }
})

userSchema.pre('save', async function(next){
    if(!this.isModified('password')){
        console.log('call inside the password');
        return next()
    }
    try {
        console.log("called inside try password", this);
        const hashedPassword = bcrypt.hashSync(this.password, 10)
        this.password = hashedPassword;
        next();
    } catch (error) {
        console.log("called inside catch password");
        next(error);
    }
})

module.exports = mongoose.model("users", userSchema);