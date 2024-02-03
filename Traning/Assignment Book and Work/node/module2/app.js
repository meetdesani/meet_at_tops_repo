const fs = require('fs');
const yargs = require('yargs');

const loadTasks = () => {
  try {
    const tasksJSON = fs.readFileSync('tasks.json', 'utf8');
    return JSON.parse(tasksJSON);
  } catch (error) {
    return { tasks: [] };
  }
};

const saveTasks = (tasks) => {
  fs.writeFileSync('tasks.json', JSON.stringify(tasks, null, 2));
};

yargs.command({
  command: 'add',
  describe: 'Add a new task',
  builder: {
    title: {
      describe: 'Task title',
      demandOption: true,
      type: 'string',
    },
    description: {
      describe: 'Task description',
      demandOption: false,
      type: 'string',
    },
  },
  handler: (argv) => {
    const tasks = loadTasks();
    const newTask = {
      title: argv.title,
      description: argv.description || '',
    };
    tasks.tasks.push(newTask);
    saveTasks(tasks);
    console.log('Task added successfully.');
  },
});

yargs.command({
  command: 'delete',
  describe: 'Delete a task',
  builder: {
    title: {
      describe: 'Task title to delete',
      demandOption: true,
      type: 'string',
    },
  },
  handler: (argv) => {
    const tasks = loadTasks();
    const taskIndex = tasks.tasks.findIndex((task) => task.title === argv.title);
    
    if (taskIndex !== -1) {
      tasks.tasks.splice(taskIndex, 1);
      saveTasks(tasks);
      console.log('Task deleted successfully.');
    } else {
      console.log('Task not found.');
    }
  },
});

yargs.parse();
