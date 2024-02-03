const getallusers = require('./getallusers')
const getGeoCode = require('./geocode')

getGeoCode.getGeoData("Ahmedabad,gujarat").then(result=>{
    // console.log("called res");
    console.log(result);
})
getallusers.getUsers().then(result=>{
    console.log(result);
})