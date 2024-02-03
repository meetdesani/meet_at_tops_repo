const CommonController = {
    async get_homePage(req,res){
        res.render('home')
    },
    async get_aboutPage(req,res){
        console.log('about async called!');
        res.render("about")
    },
    async get_indexPage(req,res){
        console.log('why async called!');
        res.render("index")
    },
    async get_whyPage(req,res){
        console.log('why async called!');
        res.render("why")
    },
    async get_trainerPage(req,res){
        console.log('Trainer async called!');
        res.render("trainer")
    },
    async get_contactPage(req,res){
        console.log('contact async called!');
        res.render("contact")
    },
}

module.exports = CommonController;
