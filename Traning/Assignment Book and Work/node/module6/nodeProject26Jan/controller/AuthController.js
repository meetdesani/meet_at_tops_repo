const jwt = require("jsonwebtoken");
const bcrypt = require("bcryptjs");
const users = require("../model/user");
const nodemailer = require("nodemailer");
const { request } = require("express");
const products = require("../model/product");

const transporter = nodemailer.createTransport({
  service: "Gmail",
  auth: {
    user: "lykenmeet@gmail.com",
    pass: "adkp kqce czlc hnes",
  },
});

const sendmail = async (emailId, msg) => {
  const otp = Math.floor(1000 + Math.random() * 9000);
  console.log(otp);
  const info = await transporter.sendMail({
    from: "lykenmeet@gmail.com",
    to: emailId,
    subject: "Hello from nodeProject26Jan",
    text: "your otp for registraation or Change Password is: " + otp,
    html: null,
  });
  console.log(info);
  return otp;
};

AuthController = {
  async post_login(req, res) {
    browserEmail = req.body.email;
    browserPassword = req.body.password;
    const user = await users.findOne({ email: browserEmail });
    if (!user) {
      console.log("user not found");
      message = "User not found";
      res.render("login", { message });
    } else {
      const passwordMatch = bcrypt.compareSync(
        req.body.password,
        user.password
      );
      if (passwordMatch) {
        req.session.email = browserEmail;
        console.log("password match loggedIn");
        console.log(req.session.email);
        const resultCaregory = await products.distinct("productCategory");
        const resultFragrance = await products.distinct("productName");
        const resultGift = await products.find({ productCategory: "Gift" });
        res.render("index", {
          req,
          data: resultCaregory,
          dataF: resultFragrance,
          dataG: resultGift,
        });
      } else {
        console.log("password don't match");
        res.render("login");
      }
      // if(browserPassword == user.password){
      //     if(user.isEmailConfirmed == 1){
      //         req.session.email = browserEmail
      //         res.render('index')
      //     }else{
      //         console.log('User emai is not confirmed!');
      //         res.render('login')
      //     }
      // }else{
      //     console.log('password not matched!');
      //     res.render('login')
      // }
    }
  },
  async get_otpConfirm(req, res) {
    // const user = await users.findOne({ email: req.query.email })
    // console.log('db user ==========: ',user)
    res.render("otpConfirm", { email: req.query.email });
  },
  async post_otpConfirm(req, res) {
    const user = await users.findOne({ email: req.query.email });
    console.log("db user ==========: ", user);
    dbEmail = user.email;
    console.log("db user emai: ", dbEmail);
    otpuser = req.body.otpuser;
    console.log(otpuser);
    console.log(user.otp);
    if (otpuser == user.otp) {
      console.log("insinde if");

      // await user.updateOne({ email:dbEmail },{ $set: { isEmailConfirmed: '1' }}, { new: true })
      await users.updateOne(
        { email: dbEmail },
        {
          $set: {
            isEmailConfirmed: 1,
          },
        }
      );

      //    console.log("after update")
      // user.save()
      if (user.isEmailConfirmed == 1) {
        // req.session.destroy()
        res.render("index");
      } else {
        console.log("db is not getting updated!");
        res.render("index");
      }
    } else {
      console.log(otpuser);
      console.log(user.otp);
      console.log(user.email);
      // res.render('otpConfirm')
      console.log("can't confirm otp");
    }
  },
  async get_login(req, res) {
    const resultCaregory = await products.distinct("productCategory");
    const resultFragrance = await products.distinct("productName");
    const resultGift = await products.find({ productCategory: "Gift" });
    res.render("login", {
      req,
      data: resultCaregory,
      dataF: resultFragrance,
      dataG: resultGift,
    });
  },
  async get_logout(req, res) {
    req.session.destroy();
    res.render("index");
  },
  async post_signup(req, res) {
    console.log("inside post index controller");
    const otp = await sendmail(req.body.email, " mail sent");
    const newUser = new users({
      fname: req.body.fname,
      lname: req.body.lname,
      email: req.body.email,
      password: req.body.password,
      otp: otp,
      isEmailConfirmed: 0,
      isSeller: false,
      isAdmin: false,
    });
    try {
      otpEmail = req.body.email;
      console.log(">>> req.body.email", otpEmail);
      req.session.otpEmail = req.body.email;
      console.log("session otpEmail", req.session.otpEmail);
      const userSave = await newUser.save();
      console.log("saved");
      // res.render('otpConfirm?email='+req.body.email)
      // res.render(`otpConfirm?email=${req.body.email}`)
      res.redirect(`otpConfirm?email=${req.body.email}`);
    } catch (err) {
      console.log(err);
    }
  },
  async get_signup(req, res) {
    const resultCaregory = await products.distinct("productCategory");
    const resultFragrance = await products.distinct("productName");
    const resultGift = await products.find({ productCategory: "Gift" });
    res.render("signup", {
      req,
      data: resultCaregory,
      dataF: resultFragrance,
      dataG: resultGift,
    });
  },
  async get_forgotpassword(req, res) {
    res.render("forgotpassword");
  },
  async post_forgotpassword(req, res) {
    //collect email
    const reqEmail = req.body.email;
    req.session.forgotEmail = reqEmail;
    //check if user is in database
    try {
      const user = await users.findOne({ email: reqEmail });
    } catch (err) {
      console.log("can't find user!", err);
    }

    //sendmail
    const otp = await sendmail(reqEmail, " mail sent");
    console.log(otp);

    //create session to use otp in another async function
    req.session.forgotMailOtp = otp;
    console.log("req.session.forgotMailOtp", req.session.forgotMailOtp);

    //loading header panel...
    const headerSomethingSpecific = await products.distinct("productCategory", {
      productCategory: { $ne: "Gift" },
    });
    const headerFragrance = await products.distinct("productName");
    const headerGifts = await products.find({ productCategory: "Gift" });
    console.log("header loaded");

    //response
    res.render("forgototpconfirm", {
      req,
      data: headerSomethingSpecific,
      dataF: headerFragrance,
      dataG: headerGifts,
    });
  },
  async get_forgototpconfirm(req, res) {
    res.render("forgototpconfirm");
  },
  async post_forgototpconfirm(req, res) {
    //collect otps
    reqOtp = req.body.otp;
    sentOtp = req.session.forgotMailOtp;

    //confirm the otp
    try {
      if (reqOtp == sentOtp) {
        console.log("otp matched");
        res.render("createnewpassword");
      } else {
        console.log("password not matched! try Again");
        req.render("forgototpconfirm");
      }
    } catch (err) {
      console.log("error while confirming otp", err);
    }
  },
  async get_createnewpassword(req, res) {
    //user email
    reqEmail = req.session.forgotEmail;
    console.log("reqEmail", reqEmail);

    res.render("createnewpassword");
  },
  async post_createnewpassword(req, res) {
    //user email
    reqEmail = req.session.forgotEmail;
    console.log("reqEmail", reqEmail);

    //collect password
    reqPass = req.body.password;
    reqConPass = req.body.cpassword;

    if (reqPass == reqConPass) {
      console.log("pass and cpass match");
      try {
        const hashpass = await bcrypt.hash(reqPass, 10);
        const user = await users.updateOne(
          { email: reqEmail },
          { $set: { password: hashpass } }
        );
        console.log('changed pass is: ',reqPass);
        console.log("password is changed!");
        res.redirect('login')
      } catch (err) {
        console.log("error", err);
      }
    } else {
      console.log("pass and cpass don't match.");
      message = "pass and cpass don't match.";
      res.render("createnewpassword", {
        req,
        message: message,
      });
    }

    //change password in database
  },
};

module.exports = AuthController;
