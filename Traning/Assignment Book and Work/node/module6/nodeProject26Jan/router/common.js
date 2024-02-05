const express = require('express')
const router =  express.Router()
const { CommonController } = require('../controller')

router.get('/',CommonController.get_index)
router.get('/allProducts',CommonController.get_allProducts)
router.get('/somethingSpecific',CommonController.get_somethingSpecific)
router.get('/findYourFavFra',CommonController.get_findYourFavFra)
router.get('/productDetails',CommonController.get_productDetails)
router.get('/cart',CommonController.get_cart)
router.get('/addToCart',CommonController.get_addToCart)
router.get('/removeFromCart',CommonController.get_removeFromCart)
router.get('/checkout',CommonController.get_checkout)
router.get('/payment',CommonController.get_payment)

module.exports = router