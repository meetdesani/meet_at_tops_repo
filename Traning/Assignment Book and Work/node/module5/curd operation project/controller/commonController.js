//i
const User = require("../model/user");
const jwt = require("jsonwebtoken");
const session = require('express-session')

//logic
const commonController = {
  async post_register(req, res) {
    //get data
    const { username, password } = req.body;

    // Check if the username already there
    const existingUser = await User.findOne({ username });
    if (existingUser) {
      return res.status(400).json({ message: "Username already exists" });
    }

    // Create a new user
    const user = await new User({
      username,
      password,
    });

    // Generate a token
    const token = jwt.sign({ username }, "lykenMeet");
    user.tokens.push(token);
    await user.save();

    //response
    try{
      res.status(201).json({ message: "User registered successfully", token });
    }
    catch (error) {
      console.error(error);
      res.status(500).json({ message: "Internal server error" });
    }
  },
  async post_login(req, res) {
    //get data
    const { username, password } = req.body;

    // Find the user by username and password
    const user = await User.findOne({ username, password });

    //if user not found
    if (!user) {
      return res.status(401).json({ message: "Invalid credentials" });
    }

    // Generate a new token
    const token = jwt.sign({ username }, "lykenMeet");
    user.tokens.push(token);
    await user.save();

    req.session.user = user;
    res.json({ token });
  },
  async post_logout(req, res) {
    // Remove the token from the user's tokens array
    req.session.user.tokens = req.session.user.tokens.filter(
      (token) => token !== req.body.token
    );
    res.json({ message: "Logged out successfully" });
  },
  async post_logout_all_devices(req, res) {
    //// Remove all tokens from the user's tokens array
    req.session.user.tokens = [];
    res.json({ message: "Logged out from all devices successfully" });
  },
};

//e
module.exports = commonController;
