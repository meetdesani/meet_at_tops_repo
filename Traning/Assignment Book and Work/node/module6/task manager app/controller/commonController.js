const tasks = require("../model/task");
const mongoose = require("mongoose");

commonController = {
  async get_index(req, res) {
    res.render("index");
  },
  async get_newtask(req, res) {
    res.render("newTask");
  },
  async post_newtask(req, res) {
    //get data from form
    title = req.body.title;
    console.log("title", title);
    description = req.body.description;

    //new task logic
    try {
      const newTask = await new tasks({
        task: title,
        description: description,
      });

      const saveTask = await newTask.save();
      console.log("Task saved successfully:", saveTask);
    } catch (error) {
      console.error("Error saving task:", error);
    }

    //response
    res.redirect("newTask");
  },
  async get_alltask(req, res) {
    let allTask;
    try {
      allTask = await tasks.find({});
      console.log("hi, try get alltask", allTask);
    } catch (err) {
      console.log(err);
    }
    res.render("alltask", { alltask: allTask });
  },
  async get_taskComplete(req, res) {
    //get taskId
    const reqId = req.query.taskId;
    try {
      //convert string to object
      const objectId = new mongoose.Types.ObjectId(reqId);

      //find that task in database and change the
      const updateTask = await tasks.findOneAndUpdate(
        { _id: objectId },
        { $set: { done: true } },
        { new: true }
      );
      console.log("updateTask", updateTask);
    } catch (err) {
      console.log("err");
    }
    res.render("index");
  },
  async get_taskIncomplete(req, res) {
    const taskId = req.query.taskId;

    try {
      //convert string to object
      const objectId = await new mongoose.Types.ObjectId(taskId);

      const updateTask = await tasks.findOneAndUpdate(
        { _id: objectId },
        { $set: { done: false } },
        { new: true }
      );
      console.log("updateTask", updateTask); 
    } catch (error) {
      console.error(error);
      res.status(500).send("Internal Server Error");
    }
    res.render("index");
  },
  async get_deleteTask(req,res){
    const taskId = req.query.taskId;

    try {
        //convert string to object
        const objectId = await new mongoose.Types.ObjectId(taskId);
  
        const deleteTask = await tasks.deleteOne(
          { _id: objectId },
        );
        console.log("deleteTask", deleteTask); 
      } catch (error) {
        console.error(error);
        res.status(500).send("Internal Server Error");
      }
      res.render("index");
  }
};

module.exports = commonController;
