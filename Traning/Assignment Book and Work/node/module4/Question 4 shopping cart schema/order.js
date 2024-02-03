const mongoose = require("mongoose");

const orderSchema = new mongoose.Schema({
    "_id": ObjectId("order_id"),
      "user_id": ObjectId("user_id"),
      "products": [
    {
        "product_id": ObjectId("product_id"),
        "quantity": 2,
        "price": 19.99
    }],
})

module.exports = mongoose.model("order", orderSchema);
