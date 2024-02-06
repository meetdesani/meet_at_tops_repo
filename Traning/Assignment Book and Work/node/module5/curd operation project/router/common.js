const express = require('express')
const router = express.Router()
const commonController = require('../controller/commonController');

router.use(express.json());

router.post('/register', commonController.post_register)
router.post('/login', commonController.post_login)
router.post('/logout', commonController.post_logout)
router.post('/logout-all-devices', commonController.post_logout_all_devices)

module.exports = router