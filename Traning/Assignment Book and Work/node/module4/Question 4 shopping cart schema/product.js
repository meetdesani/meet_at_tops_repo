const mongoose = require("mongoose");

const productSchema = new mongoose.Schema({
    "_id": ObjectId("product_id"),
      "name": String,
      "description": String,
      "price": Number,
      "stock": Number
})

module.exports = mongoose.model("product", productSchema);