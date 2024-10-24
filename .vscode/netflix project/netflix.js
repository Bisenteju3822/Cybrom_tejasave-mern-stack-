/* script.js */
// Example of dynamically adding a movie
document.addEventListener('DOMContentLoaded', () => {
  const moviesContainer = document.querySelector('.movies-container');
  const newMovie = document.createElement('div');
  newMovie.classList.add('movie');
  newMovie.innerHTML = `
    <img src="71+ceKToIDL._AC_CR0,0,0,0_SX615_SY462_.jpg" alt="New Movie">
    <h3>New Movie Title</h3>
  `;
  moviesContainer.appendChild(newMovie);
});
