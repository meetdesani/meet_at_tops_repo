const jwt = require("jsonwebtoken");
const bcrypt = require("bcryptjs");
const users = require("../model/user");
const products = require("../model/product");
const cart = require("../model/cart");
const nodemailer = require("nodemailer");
const { request } = require("express");
const { model } = require("mongoose");
const { restart } = require("nodemon");
const product = require("../model/product");

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
    text: "your otp for registraation is: " + otp,
    html: null,
  });
  console.log(info);
  return otp;
};

CommonController = {
  async get_index(req, res) {
    const resultCaregory = await products.distinct("productCategory", {
      productCategory: { $ne: "Gift" },
    });
    const resultFragrance = await products.distinct("productName");
    const resultGift = await products.find({ productCategory: "Gift" });
    res.render("index", {
      req,
      data: resultCaregory,
      dataF: resultFragrance,
      dataG: resultGift,
    });
  },
  async get_logout(req, res) {
    req.session.destroy();
    res.redirect("index");
  },
  async get_login(req, res) {
    const resultCaregory = await products.distinct("productCategory");
    res.render("login", { req, data: resultCaregory });
  },
  async post_login(req, res) {
    browserEmail = req.body.email;
    browserPassword = req.body.password;
    const user = await users.findOne({ email: browserEmail });
    if (!user) {
      console.log("user not found");
    } else {
      const passwordMatch = bcrypt.compareSync(
        req.body.password,
        user.password
      );
      if (passwordMatch) {
        req.session.email = browserEmail;
        console.log("password match loggedIn");
        console.log(req.session.email);
        res.render("index", { req });
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
  async post_index(req, res) {
    console.log("inside post index controller");
    const otp = await sendmail(req.body.email, " mail sent");
    const newUser = new users({
      fname: req.body.fname,
      lname: req.body.lname,
      email: req.body.email,
      password: req.body.password,
      otp: otp,
      isEmailConfirmed: 0,
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
      }
    } else {
      console.log(otpuser);
      console.log(user.otp);
      console.log(user.email);
      // res.render('otpConfirm')
      console.log("can't confirm otp");
    }
  },
  async get_otpConfirm(req, res) {
    // const user = await users.findOne({ email: req.query.email })
    // console.log('db user ==========: ',user)
    res.render("otpConfirm", { email: req.query.email });
  },
  async get_allProducts(req, res) {
    const result = await products.find({});
    const resultCaregory = await products.distinct("productCategory");
    const resultFragrance = await products.distinct("productName");
    const resultGift = await products.find({ productCategory: "Gift" });
    res.render("allProducts", {
      req,
      data1: result,
      data: resultCaregory,
      dataF: resultFragrance,
      dataG: resultGift,
    });
  },
  async get_somethingSpecific(req, res) {
    const resultCaregory = await products.distinct("productCategory", {
      productCategory: { $ne: "Gift" },
    });
    const resultFragrance = await products.distinct("productName");
    const resultGift = await products.find({ productCategory: "Gift" });
    product_categody = req.query.category;
    const resultCategory = await products.find({
      productCategory: product_categody,
    });

    res.render("somethingSpecific", {
      req,
      dataC: resultCategory,
      data: resultCaregory,
      dataF: resultFragrance,
      dataG: resultGift,
    });
  },
  async get_findYourFavFra(req, res) {
    const resultCaregory = await products.distinct("productCategory", {
      productCategory: { $ne: "Gift" },
    });
    const resultFragrance = await products.distinct("productName");
    const resultGift = await products.find({ productCategory: "Gift" });
    product_name = req.query.productName;
    const resultFragrance1 = await products.find({
      productName: product_name,
    });
    console.log(resultFragrance1);
    res.render("findYourFavFra", {
      req,
      dataFF: resultFragrance1,
      data: resultCaregory,
      dataF: resultFragrance,
      dataG: resultGift,
    });
  },
  async get_productDetails(req, res) {
    //loading for header
    const resultCaregory = await products.distinct("productCategory", {
      productCategory: { $ne: "Gift" },
    });
    const resultGift = await products.find({ productCategory: "Gift" });
    const resultFragrance = await products.distinct("productName");

    //collect username and check if he is logged In
    const userEmail = req.session.email;
    if (!userEmail) {
      console.log("User Email not found! Try logging in!");
      res.redirect("auth/login");
    }

    //collect productID
    const reqProductName = req.query.productName;
    const reqProductCategory = req.query.productCategory;
    let reqProductId = await products.find(
      { productName: reqProductName, productCategory: reqProductCategory },
      { _id: 1 }
    );
    reqProductId = reqProductId.toString();
    reqProductId = reqProductId.replace("{ _id: new ObjectId('", "");
    reqProductId = reqProductId.replace("') }", "");

    //collect userID
    let reqUserId = await users.find({ email: userEmail }, { _id: 1 });
    reqUserId = reqUserId.toString();
    reqUserId = reqUserId.replace("{ _id: new ObjectId('", "");
    reqUserId = reqUserId.replace("') }", "");

    //get single product to show.
    const resultSingle = await products.find({
      productName: reqProductName,
      productCategory: reqProductCategory,
    });

    console.log('reqProduct id: ', reqProductId);

    //check if product is already in cart.
    const checkCart = await cart.find({
      productId: reqProductId,
      userEmail: userEmail,
    });
    inCart = false
    if (checkCart.length > 0) {
      console.log('in cart');
      inCart = true
      // Further code logic based on checkCartproductId
    } else {
      console.log('Not in cart');
      // Handle case where no matching cart is found
    }
    console.log("inCart",inCart);
    //response
    res.render("productDetails", {
      inCart: inCart,
      req,
      dataSingle: resultSingle,
      data: resultCaregory,
      dataF: resultFragrance,
      dataG: resultGift,
      })
  },
  async get_cart(req, res) {
    //collect userEmail
    const reqUserEmail = req.session.email;
    console.log("load collect userEmail", reqUserEmail);

    // //collect productID
    // const reqProductName = req.query.productName;
    // const reqProductCategory = req.query.productCategory;
    // const reqProductIdObj = await products.find(
    //   { productName: reqProductName, productCategory: reqProductCategory },
    //   { _id: 1 }
    // );
    // let reqProductId = reqProductIdObj.toString();
    // reqProductId = reqProductId.replace("{ _id: new ObjectId('", "");
    // reqProductId = reqProductId.replace("') }", "");
    // console.log(reqProductId);

    //collect product from cart to show on HBS
    const cartProductsForSingleUSer = await cart.find(
      { userEmail: reqUserEmail },
      { productId: 1, _id: 0 }
    );
    console.log("cartProductsForSingleUSer", cartProductsForSingleUSer);
    const productIds = cartProductsForSingleUSer.map((item) => item.productId);
    const product = await products.find({ _id: productIds });

    //collect header loader
    const resultCaregory = await products.distinct("productCategory", {
      productCategory: { $ne: "Gift" },
    });
    const resultFragrance = await products.distinct("productName");
    const resultGift = await products.find({ productCategory: "Gift" });

    //sending response
    res.render("cart", {
      req,
      product: product,
      data: resultCaregory,
      dataF: resultFragrance,
      dataG: resultGift,
    });
  },
  async get_addToCart(req, res) {
    //loading header panel...
    const headerSomethingSpecific = await products.distinct("productCategory", {
      productCategory: { $ne: "Gift" },
    });
    const headerFragrance = await products.distinct("productName");
    const headerGifts = await products.find({ productCategory: "Gift" });

    //collect userEmail
    const reqUserEmail = req.session.email;

    //check if loggedin or not!
    if (!reqUserEmail) {
      console.log("User not found! Try Logging In!");
      res.redirect("auth/login");
    } else {
      //collect productID
      const reqProductName = req.query.productName;
      const reqProductCategory = req.query.productCategory;
      const reqProductIdObj = await products.find(
        { productName: reqProductName, productCategory: reqProductCategory },
        { _id: 1 }
      );
      let reqProductId = reqProductIdObj.toString();
      reqProductId = reqProductId.replace("{ _id: new ObjectId('", "");
      reqProductId = reqProductId.replace("') }", "");

      //collect product from cart to show on HBS
      const cartProductsForSingleUSer = await cart.find(
        { userEmail: reqUserEmail },
        { productId: 1, _id: 0 }
      );
      const productIds = cartProductsForSingleUSer.map(
        (item) => item.productId
      );
      const product = await products.find({ _id: productIds });

      //check if the product is in cart!
      checkProductInCart = await cart.findOne(
        { productId: reqProductId },
        { productId: 1 }
      );

      if (
        checkProductInCart &&
        checkProductInCart.productId.toString() === reqProductId
      ) {
        console.log("Product is already in cart!");
        message = "Product is already in cart!";
        res.render("cart", {
          req,
          message: message,
          product: product,
          data: headerSomethingSpecific,
          dataF: headerFragrance,
          dataG: headerGifts,
        });
      } else {
        //add new product to cart
        const addToCart = new cart({
          productId: reqProductId,
          userEmail: reqUserEmail,
        });
        const saveAddToCart = await addToCart.save();

        //collect product from cart to show on HBS
      const cartProductsForSingleUSer = await cart.find(
        { userEmail: reqUserEmail },
        { productId: 1, _id: 0 }
      );
      const productIds = cartProductsForSingleUSer.map(
        (item) => item.productId
      );
      const product = await products.find({ _id: productIds });

        //response
        res.render("cart", {
          req,
          product: product,
          data: headerSomethingSpecific,
          dataF: headerFragrance,
          dataG: headerGifts,
        });
      }
    }
  },
  async get_removeFromCart(req,res){
    //delete product code
    const deleteToCart = async (reqProductId, reqUserEmail) => {
      try {
        // Find and delete the cart item based on productId and userEmail
        const deletedCartItem = await cart.deleteOne({
          productId: reqProductId,
          userEmail: reqUserEmail,
        });
    
        if (deletedCartItem.deletedCount > 0) {
          console.log('Item removed from cart successfully');
        } else {
          console.log('Item not found in the cart');
        }
      } catch (error) {
        console.error('Error deleting item from cart:', error.message);
      }
    };
    
    // Usage
    const reqProductIdToDelete = 'yourProductId';
    const reqUserEmailToDelete = 'user@example.com';
    
    await deleteToCart(reqProductIdToDelete, reqUserEmailToDelete);
    

    //loading header panel...
    const headerSomethingSpecific = await products.distinct("productCategory", {
      productCategory: { $ne: "Gift" },
    });
    const headerFragrance = await products.distinct("productName");
    const headerGifts = await products.find({ productCategory: "Gift" });

    //collect userEmail
    const reqUserEmail = req.session.email;

    //check if loggedin or not!
    if (!reqUserEmail) {
      console.log("User not found! Try Logging In!");
      res.redirect("auth/login");
    } else {
      //collect productID
      const reqProductName = req.query.productName;
      const reqProductCategory = req.query.productCategory;
      const reqProductIdObj = await products.find(
        { productName: reqProductName, productCategory: reqProductCategory },
        { _id: 1 }
      );
      let reqProductId = reqProductIdObj.toString();
      reqProductId = reqProductId.replace("{ _id: new ObjectId('", "");
      reqProductId = reqProductId.replace("') }", "");
      
      //delete product
      await deleteToCart(reqProductId, reqUserEmail);

      //collect product from cart to show on HBS
      const cartProductsForSingleUSer = await cart.find(
        { userEmail: reqUserEmail },
        { productId: 1, _id: 0 }
      );
      const productIds = cartProductsForSingleUSer.map(
        (item) => item.productId
      );
      const product = await products.find({ _id: productIds });

      //response
      res.render('cart',{
        req,
        product: product,
        data: headerSomethingSpecific,
        dataF: headerFragrance,
        dataG: headerGifts,
      })
    }
  },
  async get_checkout(req,res){
    //loading header panel...
    const headerSomethingSpecific = await products.distinct("productCategory", {
      productCategory: { $ne: "Gift" },
    });
    const headerFragrance = await products.distinct("productName");
    const headerGifts = await products.find({ productCategory: "Gift" });


    //collect userEmail
    const reqUserEmail = req.session.email;

    //collect productID
    const reqProductName = req.query.productName;
    const reqProductCategory = req.query.productCategory;
    const reqProductIdObj = await products.find(
      { productName: reqProductName, productCategory: reqProductCategory },
      { _id: 1 }
    );
    let reqProductId = reqProductIdObj.toString();
    reqProductId = reqProductId.replace("{ _id: new ObjectId('", "");
    reqProductId = reqProductId.replace("') }", "");

    //collect product from cart to show on HBS
    const cartProductsForSingleUSer = await cart.find(
      { userEmail: reqUserEmail },
      { productId: 1, _id: 0 }
    );
    console.log("cartProductsForSingleUSer", cartProductsForSingleUSer);
    const productIds = cartProductsForSingleUSer.map((item) => item.productId);
    const product = await products.find({ _id: productIds });
    console.log(product);

    //total price calculaton
    const productsInCart = await products.find({ _id: { $in: productIds } });
    const totalPrice = productsInCart.reduce((acc, product) => acc + product.productPrice, 0);

    //response
    res.render('checkout',{
      req,
      product: product,
      data: headerSomethingSpecific,
      dataF: headerFragrance,
      dataG: headerGifts,
      totalPrice,totalPrice
    })
  },
  async get_payment(req,res){
    res.render('payment')
  }
};

module.exports = CommonController;
