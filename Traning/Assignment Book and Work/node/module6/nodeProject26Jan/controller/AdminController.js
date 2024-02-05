const users = require('../model/user')
const bcrypt = require('bcrypt')
const products = require('../model/product')

AdminController = {
    async get_logout(req,res){
        delete req.session.adminEmail
        res.render('index',{req})
    },
    async get_dashboard(req,res){
        res.render('dashboard',{req})
    },
    async get_admin(req,res){
        const resultCaregory = await products.distinct("productCategory")
        const resultFragrance = await products.distinct("productName")
        const resultGift = await products.find({productCategory:"Gift"})
        res.render('admin_login',{req, data:resultCaregory, dataF: resultFragrance, dataG: resultGift})
    },
    async post_admin(req,res){
        reqEmail = req.body.email
        reqPass = req.body.password
        console.log(reqEmail);
        console.log(reqPass);
        const user = await users.findOne({email: reqEmail})
        const passwordMatch = await bcrypt.compare(req.body.password, user.password)
        if(!user){
            console.log('User not found');
            message = "user not found"
            res.render('admin_login', {message})
        }else{
            console.log('user found!');
            if(passwordMatch){
                req.session.adminEmail = user.email
                console.log('adminEmail session : ', req.session.adminEmail);
                console.log('passwordMatched!');
                if(user.isAdmin == true){
                    console.log('isAdmin true');
                    console.log('User is Admin');
                    messageG = 'Welcome to Dashboard'
                    res.render('dashboard', {messageG, req})
                }else{
                    console.log('password not matched!');
                    message = 'password not matched!'
                    res.render('admin_login', {message})
                }
            }else{
                console.log('password not matched!');
                message = 'Password compare failed'
                res.render('admin_login',{message, req })
            }
        }
            // if(!passwordMatch){
            //     console.log('password not matched!');
            //     message = 'password not matched!'
            //     res.render('admin_login', {message})
            // }else{
            //     if(user.isAdmin == true){
            //         console.log('User is Admin');
            //         message = 'Welcome to Dashboard'
            //         res.render('dashboard')
            //     }
            // }
            
    },
    async get_newProduct(req,res){
        res.render('newProduct',{req})
    },
    async post_newProduct(req,res){
        const fileExtension = req.file.originalname.split('.').pop();
        const newProduct = new products({
            productName: req.body.productName,
            productCategory: req.body.productCategory,
            productSalePrice: req.body.productPrice,
            productPrice: req.body.productPrice,
            productImageName: req.body.productName + ' ' + req.body.productCategory+ '.'+fileExtension,
        })
        try{
            console.log('call try in post newProduct');
            const productSave = await newProduct.save()
            console.log('product saved');
            res.render('newProduct',{ req } )
        }catch(err){
            console.log('err', err);
            res.render('newProduct',{ req } )
        }
    }
}

module.exports = AdminController