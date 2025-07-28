const mongoose = require('mongoose');

const reservationSchema = new mongoose.Schema({
  username: String,
  email: String,
  date: String,
  time: String,
  guests: Number
});

module.exports = mongoose.model('Reservation', reservationSchema);
