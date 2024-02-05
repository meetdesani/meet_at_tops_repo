const mongoose = require('mongoose')

const cartSchema = new mongoose.Schema({
    productId: {
        type: String,
        required: true
    },
    userEmail: {
        type: String,
        required: true
    },
})

cartSchema.index({ productId: 1, userEmail: 1 }, { unique: true });

module.exports = mongoose.model('cart',cartSchema)
