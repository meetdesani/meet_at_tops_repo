// const express = require('express');
// const bodyParser = require('body-parser');

// const app = express();
// const port = 3000;

// app.use(bodyParser.json());

// let tasks = [
//   {
//     id: 1,
//     title: 'Task 1',
//     description: 'Description for Task 1',
//     done: false
//   },
//   {
//     id: 2,
//     title: 'Task 2',
//     description: 'Description for Task 2',
//     done: false
//   }
// ];

// // Get all tasks
// app.get('/tasks', (req, res) => {
//   res.json({ tasks });
// });

// // Get a specific task
// app.get('/tasks/:id', (req, res) => {
//   const taskId = parseInt(req.params.id);
//   const task = tasks.find(task => task.id === taskId);

//   if (!task) {
//     return res.status(404).json({ error: 'Task not found' });
//   }

//   res.json({ task });
// });

// // Create a new task
// app.post('/tasks', (req, res) => {
//   const { title, description } = req.body;

//   if (!title) {
//     return res.status(400).json({ error: 'Title is required' });
//   }

//   const newTask = {
//     id: tasks.length + 1,
//     title,
//     description,
//     done: false
//   };

//   tasks.push(newTask);
//   res.json({ task: newTask });
// });

// // Update a task
// app.put('/tasks/:id', (req, res) => {
//   const taskId = parseInt(req.params.id);
//   const taskIndex = tasks.findIndex(task => task.id === taskId);

//   if (taskIndex === -1) {
//     return res.status(404).json({ error: 'Task not found' });
//   }

//   const updatedTask = { ...tasks[taskIndex], ...req.body };
//   tasks[taskIndex] = updatedTask;

//   res.json({ task: updatedTask });
// });

// // Delete a task
// app.delete('/tasks/:id', (req, res) => {
//   const taskId = parseInt(req.params.id);
//   tasks = tasks.filter(task => task.id !== taskId);

//   res.json({ message: 'Task deleted successfully' });
// });

// app.listen(port, () => {
//   console.log(`Server is running on http://localhost:${port}`);
// });
