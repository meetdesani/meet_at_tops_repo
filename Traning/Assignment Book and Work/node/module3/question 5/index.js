const express = require('express');
const moment = require('moment-timezone');
const app = express();
const port = 3000;

app.use(express.static('public'));
app.use(express.urlencoded({ extended: true }));

app.get('/', (req, res) => {
  res.sendFile(__dirname + '/public/index.html');
});

app.post('/getTimes', (req, res) => {
  let { timeZones } = req.body;
  if (typeof timeZones === 'string') {
    timeZones = timeZones.split(',');
  }
  const times = {};

  timeZones.forEach((timezone) => {
    const currentTime = moment().tz(timezone).format('YYYY-MM-DD HH:mm:ss');
    times[timezone] = currentTime;
  });

  res.json(times);
});

app.listen(port, () => {
  console.log(`Server listening at http://localhost:3000`);
});
