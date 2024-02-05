const express = require('express')
const router = express.Router()
const {commonController} = require('../controller')

router.get('/',commonController.get_index)
router.get('/newTask',commonController.get_newtask)
router.post('/newTask',commonController.post_newtask)
router.get('/alltask',commonController.get_alltask)
router.get('/taskComplete',commonController.get_taskComplete)
router.get('/taskIncomplete',commonController.get_taskIncomplete)
router.get('/deleteTask',commonController.get_deleteTask)

module.exports = router