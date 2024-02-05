const mongoose = require("mongoose");

const taskSchema = new mongoose.Schema({
    task: String,
    description: String,
    done: {
        type: Boolean,
        default: false
    }
})

module.exports = mongoose.model("tasks", taskSchema);