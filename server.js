require('dotenv').config();
const express = require('express');
const mongoose = require('mongoose');
const bodyParser = require('body-parser');
const path = require('path');
const bcrypt = require('bcrypt');

// Models
const User = require('./modules/User');
const Reservation = require('./modules/Reservation');
const Message = require('./modules/Message');

const app = express();
const PORT = process.env.PORT || 7700;

// MongoDB Connection
mongoose.connect(process.env.MONGO_URI, {
  useNewUrlParser: true,
  useUnifiedTopology: true
})
.then(() => console.log('✅ MongoDB connected'))
.catch(err => console.error('❌ MongoDB connection error:', err));

// Middleware
app.use(bodyParser.urlencoded({ extended: true }));
app.use(express.static(path.join(__dirname, 'public')));
app.use(express.static(path.join(__dirname, 'views')));

// Serve Static Pages
app.get('/', (req, res) => res.sendFile(path.join(__dirname, 'views', 'index.html')));
app.get('/home.html', (req, res) => res.sendFile(path.join(__dirname, 'views', 'home.html')));
app.get('/signin.html', (req, res) => res.sendFile(path.join(__dirname, 'views', 'signin.html')));
app.get('/createacc.html', (req, res) => res.sendFile(path.join(__dirname, 'views', 'createacc.html')));
app.get('/dashboard.html', (req, res) => res.sendFile(path.join(__dirname, 'views', 'dashboard.html')));
app.get('/welcome.html', (req, res) => res.sendFile(path.join(__dirname, 'views', 'welcome.html')));
app.get('/reserve.html', (req, res) => res.sendFile(path.join(__dirname, 'views', 'reserve.html')));
app.get('/contact.html', (req, res) => res.sendFile(path.join(__dirname, 'views', 'contact.html')));

// Handle Account Creation (Sign Up)
app.post('/createacc.html', async (req, res) => {
  const { username, email, password } = req.body;

  try {
    const existingUser = await User.findOne({ username });
    if (existingUser) {
      return res.send('<h2>Username already taken</h2><a href="/createacc.html">Back</a>');
    }

    const hashedpassword = await bcrypt.hash(password, 10);
    const newUser = new User({ username, email, password: hashedpassword });
    await newUser.save();

    console.log('✅ User registered:', username);
    return res.redirect('/welcome.html'); // redirect to welcome page
  } catch (err) {
    console.error('❌ Error during registration:', err);
    res.status(500).send('Server Error');
  }
});

// Handle Sign In
app.post('/signin.html', async (req, res) => {
  const { username, password } = req.body;

  try {
    const user = await User.findOne({ username });
    if (!user) {
      console.log('❌ User not found:', username);
      return res.send('<h2>User not found</h2><a href="/signin.html">Back</a>');
    }

    const isMatch = await bcrypt.compare(password, user.password);
    if (!isMatch) {
      console.log('❌ Wrong password for:', username);
      return res.send('<h2>Incorrect password</h2><a href="/signin.html">Back</a>');
    }

    console.log('✅ User logged in:', username);
    return res.redirect('/welcome.html'); // redirect to welcome page
  } catch (err) {
    console.error('❌ Error during login:', err);
    res.status(500).send('Server Error');
  }
});

// Handle Table Reservation
app.post('/reserve.html', async (req, res) => {
  const { name, email, date, time, guests } = req.body;

  try {
    const newReservation = new Reservation({ name, email, date, time, guests });
    await newReservation.save();

    console.log('✅ Reservation saved for:', name);
    res.send('<h2>Reservation successful!</h2><a href="/">Back to Home</a>');
  } catch (err) {
    console.error('❌ Reservation error:', err);
    res.status(500).send('Error saving reservation');
  }
});

// Handle Contact Form
app.post('/contact.html', async (req, res) => {
  const { name, email, message } = req.body;

  try {
    const newMessage = new Message({ name, email, message });
    await newMessage.save();

    console.log('✅ Message received from:', name);
    res.send('<h2>Message received. Thank you!</h2><a href="/">Back to Home</a>');
  } catch (err) {
    console.error('❌ Contact form error:', err);
    res.status(500).send('Error sending message');
  }
});

// Start Server
app.listen(PORT, () => {
  console.log(`🚀 Server running at http://localhost:${PORT}`);
});
