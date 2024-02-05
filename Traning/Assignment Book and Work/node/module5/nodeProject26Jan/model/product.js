const mongoose = require('mongoose')

const productSchema = new mongoose.Schema({
    productName: String,
    productCategory: String,
    productPrice: Number,
    productSalePrice: Number,
    productImageName: String,
})

module.exports = mongoose.model('product',productSchema)
