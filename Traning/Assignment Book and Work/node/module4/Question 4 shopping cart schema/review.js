const mongoose = require("mongoose");

const reviewSchema = new mongoose.Schema({
    "_id": ReviewId("review_id"),
      "user_id": ObjectId("user_id"),
      "product_id": ObjectId("product_id"),
      "rating": Number,
      "comment": String,
      "review_date": ISODate
})

module.exports = mongoose.model("review", reviewSchema);