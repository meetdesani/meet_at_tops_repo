const express = require('express')
const router = express.Router()
const {CommonController} = require('../controllers')

console.log("called inside route");
router.get('/',CommonController.get_indexPage);
router.get('/about',CommonController.get_aboutPage);
router.get('/index',CommonController.get_indexPage);
router.get('/why',CommonController.get_whyPage);
router.get('/trainer',CommonController.get_trainerPage);
router.get('/contact',CommonController.get_contactPage);
// router.get('/about',commonController.get_aboutPage);

module.exports = router;