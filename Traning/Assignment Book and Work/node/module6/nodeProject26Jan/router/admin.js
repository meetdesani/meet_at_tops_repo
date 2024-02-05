const express = require('express')
const router = express.Router()
const {AdminController} = require('../controller')
const multer = require('multer')

// const upload = multer({ dest: './public/data/uploads/' })

// const storage = multer.diskStorage({
//     destination: function (req, file, cb) {
//         cb(null, './public/multer/')
//     },
//     filename: function (req, file, cb) {
//         console.log('req.filename: ',req.filename);
//         console.log('req.file: ',req.file);
//         console.log('req.files: ',req.files);
//         console.log('file.fieldname', file.fieldname);
//         console.log('file.originalname', file.originalname);
//         console.log('req.body.productName', req.body.productName);
//         const uniqueSuffix = Date.now() + '-' + Math.round(Math.random() * 1E9)
//         cb(null, file.fieldname + '-' +uniqueSuffix+"."+file.originalname)
//     }
// })


// const multer = require('multer')
// // const upload = multer({ dest : './public/multer/productImage' })

// // console.log(upload);


// const storage = multer.diskStorage({
//     destination: function (req, file, cb) {
//         cb(null, './public/multer/productImage/')
//     },
//     filename: function (req, file, cb) {
//         const uniqueSuffix = Date.now() + '-' + Math.round(Math.random() * 1E9)
//         cb(null, file.fieldname + '-' +uniqueSuffix+"."+file.originalname)
//     }
// })
// console.log(storage);
// const upload = multer({ storage: storage })

//multer start
const storage = multer.diskStorage({
        destination: function (req, file, cb) {
            cb(null, './public/multer/')
        },
        filename: function (req, file, cb) {
            console.log('ext', file.originalname);
            const fileExtension = file.originalname.split('.').pop();
            cb(null, req.body.productName + ' ' + req.body.productCategory+ '.'+fileExtension)
        }
})

const upload = multer({ storage: storage })
//multer end

router.get('/login',AdminController.get_admin)
router.get('/logout',AdminController.get_logout)
router.post('/login',AdminController.post_admin)
router.get('/dashboard',AdminController.get_dashboard)
router.get('/newProduct',AdminController.get_newProduct)
// router.post('/newProduct', upload.single('productImage') ,AdminController.post_newProduct)
router.post('/newProduct', upload.single('productImage'), AdminController.post_newProduct);

module.exports = router