const express = require('express')
const router =  express.Router()
const { AuthController } = require('../controller')

router.post('/signup',AuthController.post_signup)
router.get('/signup',AuthController.get_signup)
router.get('/otpConfirm',AuthController.get_otpConfirm)
router.post('/otpConfirm',AuthController.post_otpConfirm)
router.get('/login',AuthController.get_login)
router.post('/login',AuthController.post_login)
router.get('/logout',AuthController.get_logout)
router.get('/forgotpassword',AuthController.get_forgotpassword)
router.post('/forgotpassword',AuthController.post_forgotpassword)
router.get('/forgototpconfirm',AuthController.get_forgototpconfirm)
router.post('/forgototpconfirm',AuthController.post_forgototpconfirm)
router.get('/createnewpassword',AuthController.get_createnewpassword)
router.post('/createnewpassword',AuthController.post_createnewpassword)

module.exports = router