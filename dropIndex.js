const mongoose = require('mongoose');
require('dotenv').config();

async function dropIndex() {
  try {
    await mongoose.connect(process.env.MONGO_URI);
    const db = mongoose.connection.db;
    const collection = db.collection('users');

    const indexes = await collection.indexes();
    console.log('Current Indexes:', indexes);

    // Drop the index on `name` field
    await collection.dropIndex('name_1');
    console.log('✅ Dropped index "name_1"');
  } catch (err) {
    console.error('❌ Error dropping index:', err.message);
  } finally {
    await mongoose.disconnect();
  }
}

dropIndex();
