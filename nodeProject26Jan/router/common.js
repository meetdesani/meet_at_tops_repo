const express = require('express')
const router =  express.Router()
const { CommonController } = require('../controller')

router.get('/',CommonController.get_index)
router.post('/',CommonController.post_index)
router.get('/otpConfirm',CommonController.get_otpConfirm)
router.post('/otpConfirm',CommonController.post_otpConfirm)
router.get('/login',CommonController.get_login)
router.post('/login',CommonController.post_login)
router.get('/logout',CommonController.get_logout)

module.exports = router