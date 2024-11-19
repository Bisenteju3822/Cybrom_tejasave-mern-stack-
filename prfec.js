const fet = function () {
  fetch("https://jsonplaceholder.typicode.com/todos")
    .then(response => response.json()) // Parse the JSON from the response
    .then(data => console.log(data)) // Log the data
    .catch(error => console.error('Error fetching data:', error)); // Handle any errors
}
fet();
