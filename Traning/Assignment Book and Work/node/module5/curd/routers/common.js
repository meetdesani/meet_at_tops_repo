const express = require('express')
const router = express.Router()
const { common_controller } = require('../controllers')

router.post('/register',common_controller.post_register)//username and password from body
router.post('/login', common_controller.post_login)//username and password from body
router.post('/logout', common_controller.post_logout)
router.post('/logout-all-devices', common_controller.post_logout_all_devices)


module.exports = router