const axios = require("axios");

const getUsers = ()=>{
    return new Promise((resolve,reject)=>{
        const url = `https://jayramin.000webhostapp.com/allusers`;
        axios.get(url).then(result=>{
            // console.log(result);
            // console.log(result.data);
            console.log(result.data.Data);
            // resolve({lng:lng,lat:lat})
        }).catch(err=>{
            reject(err)
        })
    })
} 


module.exports = {getUsers}