import { useState } from "react";

const Form = () => {
  const [value, setValue] = useState(''); // Initialize state for input value

  const handleChange = (event) => {
    setValue(event.target.value); // Update state with input value
    console.log(event.target.value); // Log the input value
  };

  const handleSubmit = () => {
    if (value === '') {
      alert("Empty input");
    } else {
      alert("Success");
    }
  };

  return (
    <>
      <input type="text" value={value} onChange={handleChange} placeholder="Type something..." />
      <button onClick={handleSubmit}>Click</button>
    </>
  );
};

export default Form;
