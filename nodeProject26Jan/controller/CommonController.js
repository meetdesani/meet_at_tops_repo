const jwt = require("jsonwebtoken")
const bcrypt = require('bcryptjs')
const users = require('../model/user')
const nodemailer = require('nodemailer')
const { request } = require('express')

const transporter =  nodemailer.createTransport({
    service: 'Gmail',
    auth:{
        user: 'lykenmeet@gmail.com',
        pass: 'adkp kqce czlc hnes'
    }
})

const sendmail = async(emailId, msg)=>{
    const otp = Math.floor(1000 + Math.random() * 9000);
    console.log(otp);
    const info = await transporter.sendMail({
        from: 'lykenmeet@gmail.com',
        to: emailId,
        subject: 'Hello from nodeProject26Jan',
        text: 'your otp for registraation is: '+ otp ,
        html: null
    })
    console.log(info);
    return otp
}

CommonController = {
    async get_index(req,res){
        res.render('index')
    },
    async get_logout(req,res){
        req.session.destroy()
        res.render('index')
    },
    async get_login(req,res){
        res.render('login')
    },
    async post_login(req,res){
        browserEmail = req.body.email
        browserPassword = req.body.password
        const user = await users.findOne({email: browserEmail})
        if(!user){
            console.log('user not found');
        }else{
            const passwordMatch = bcrypt.compareSync(req.body.password, user.password);
            if(passwordMatch){
                req.session.email = browserEmail
                console.log('password match loggedIn');
                console.log(req.session.email);
                res.render('index',{ req })
            }else{
                console.log("password don't match");
                res.render('login')
            }
            // if(browserPassword == user.password){
            //     if(user.isEmailConfirmed == 1){
            //         req.session.email = browserEmail
            //         res.render('index')
            //     }else{
            //         console.log('User emai is not confirmed!');
            //         res.render('login')
            //     }
            // }else{
            //     console.log('password not matched!');
            //     res.render('login')
            // }
        }
    },
    async post_index(req,res){
        console.log('inside post index controller');
        const otp =  await sendmail(req.body.email," mail sent")
        const newUser = new users ({
            fname: req.body.fname,
            lname: req.body.lname,
            email: req.body.email,
            password: req.body.password,
            otp: otp,
            isEmailConfirmed: 0,
        })
        try{
            otpEmail = req.body.email
            console.log('>>> req.body.email', otpEmail)
            req.session.otpEmail = req.body.email
            console.log('session otpEmail', req.session.otpEmail)
            const userSave = await newUser.save()
            console.log('saved');
            // res.render('otpConfirm?email='+req.body.email)
            // res.render(`otpConfirm?email=${req.body.email}`)
            res.redirect(`otpConfirm?email=${req.body.email}`)
        }catch(err){
            console.log(err);
        }
    },
    async post_otpConfirm(req,res){
        const user = await users.findOne({ email: req.query.email })
	    console.log('db user ==========: ',user)
        dbEmail = user.email
	    console.log('db user emai: ',dbEmail)
        otpuser = req.body.otpuser
        console.log(otpuser)
        console.log(user.otp)
        if(otpuser == user.otp){
            console.log("insinde if");
            
            // await user.updateOne({ email:dbEmail },{ $set: { isEmailConfirmed: '1' }}, { new: true })
            await users.updateOne(
                { email:dbEmail }, 
                {
                   $set: {
                       "isEmailConfirmed": 1,
                   }
                }
               )

            //    console.log("after update")
            // user.save()
            if(user.isEmailConfirmed == 1){
                // req.session.destroy()
                res.render('index')
            }else{
                console.log('db is not getting updated!');
            }
        }else{
            console.log(otpuser)
            console.log(user.otp)
            console.log(user.email)
            // res.render('otpConfirm')
            console.log("can't confirm otp");
        }
    },
    // async post_otpConfirm(req,res){
    //     const user = await users.findOne({ email: req.session.otpEmail })
    //     console.log('session otpEmail from post otp confirm', req.session.otpEmail)
    //     otpuser = req.body.otpuser
    //     console.log(otpuser)
    //     console.log(user.otp)
    //     if(otpuser == user.otp){
    //         const updateUser = await user.updateOne({email:req.session.otpEmail},{isEmailConfirmed: true})
    //         const updateUser1 = await user.save()
    //         if (!updateUser1) {
    //             console.log('Error saving user after update');
    //             // Handle the case when the update operation fails
    //             return res.render('otpConfirm');
    //         }else{
    //             console.log('successful');
    //         }
    //         console.log('email confirmed is: ', updateUser1.isEmailConfirmed);
    //         req.session.destroy()
    //         res.render('index')
    //     }else{
    //         console.log(otpuser)
    //         console.log(user.otp)
    //         console.log(user.email)
    //         res.render('otpConfirm')
    //         console.log("can't confirm otp");
    //     }
    // },
    async get_otpConfirm(req,res){
        // const user = await users.findOne({ email: req.query.email })
	    // console.log('db user ==========: ',user)
        res.render('otpConfirm',{"email":req.query.email})
    }
}
module.exports = CommonController