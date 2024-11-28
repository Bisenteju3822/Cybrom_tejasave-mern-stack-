// script.js

document.getElementById('light-mode-btn').addEventListener('click', function () {
  // Set light mode
  document.body.classList.add('light-mode');
  document.body.classList.remove('dark-mode');

  // Save the mode in local storage
  localStorage.setItem('mode', 'light');
});

document.getElementById('dark-mode-btn').addEventListener('click', function () {
  // Set dark mode
  document.body.classList.add('dark-mode');
  document.body.classList.remove('light-mode');

  // Save the mode in local storage
  localStorage.setItem('mode', 'dark');
});

// Check the saved mode on page load and apply it
window.addEventListener('load', function () {
  const savedMode = localStorage.getItem('mode');
  if (savedMode) {
    document.body.classList.add(savedMode + '-mode');
  } else {
    // Default to light mode if no mode is saved
    document.body.classList.add('light-mode');
  }
});
