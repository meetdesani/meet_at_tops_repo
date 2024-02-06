const User = require("../model/user");
const session = require("express-session");
const jwt = require("jsonwebtoken");

const common_controller = {
  async post_register(req, res) {
    //get data
    const { username, password } = req.body;
    console.log(username);
    console.log(password);
    console.log(User);

    // Check if the user already there
    const existingUser = await User.findOne({ username: username });
    if (existingUser) {
      return res.status(400).json({ message: "Username already exists" });
    }

    // Create a new user
    const user = new User({
      username: username,
      password: password,
    });
    try {
      console.log("user saved");
    } catch (err) {
      console.log("err", err);
    }

    // Generate a token
    const token = jwt.sign({ username }, "lykenMeet");
    user.tokens.push(token);
    await user.save();

    //response
    try {
      res.status(201).json({ message: "User registered successfully", token });
    } catch (error) {
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
    console.log('login session', req.session.user);
    res.json({ token });
  },
  async post_logout(req, res) {
    try {
      // Make sure req.session.user and req.session.user.tokens exist
      if (!req.session.user || !req.session.user.tokens) {
        return res.status(400).json({ error: "Invalid session or user" });
      }
  
      // Remove the token from the user's tokens array
      req.session.user.tokens = req.session.user.tokens.filter(
        (token) => token !== req.body.token
      );
  
      console.log('logout session', req.session.user);
  
      res.json({ message: "Logged out successfully" });
    } catch (error) {
      console.error("Error during logout:", error);
      res.status(500).json({ error: "Internal Server Error" });
    }
  },
  async post_logout_all_devices(req, res) {
    //// Remove all tokens from the user's tokens array
    req.session.user.tokens = [];
    res.json({ message: "Logged out from all devices successfully" });
  },
};

module.exports = common_controller;
