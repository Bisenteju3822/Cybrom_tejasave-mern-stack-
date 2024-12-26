const express = require('express');
const users = require('./MOCK_DATA.json');
const app = express();
const PORT = 8000;

// Middleware to parse JSON bodies
app.use(express.json());

// Route to return HTML list of user names
app.get('/users', (req, res) => {
  const html = `
    <ul>
      ${users.map(user => `<li>${user.first_name}</li>`).join('')}
    </ul>
  `;
  res.send(html);
});

// REST API

// API route to return JSON data
app.get('/api/users', (req, res) => {
  return res.json(users);
});

// Route to handle specific user by ID
app.route('/api/users/:id')
  .get((req, res) => {
    const id = Number(req.params.id);
    const user = users.find(user => user.id === id);
    if (user) {
      return res.json(user);
    } else {
      return res.status(404).json({ error: "User not found" });
    }
  })
  .patch((req, res) => {
    return res.json({ status: "Pending" });
  })
  .delete((req, res) => {
    return res.json({ status: "Pending" });
  });

// Route to create a new user
app.post('/api/users', (req, res) => {
  const newUser = req.body;
  console.log(newUser);

  // Add the new user to the users array
  users.push(newUser);

  // Respond with the newly created user
  return res.status(201).json(newUser);
});

// Start the server
app.listen(PORT, () => console.log(`Server started at port ${PORT}`));
