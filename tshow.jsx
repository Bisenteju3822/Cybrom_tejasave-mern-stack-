import { useState } from "react";

const App = () => {
  const [visible, setVisible] = useState(false);

  const toggleVisibility = () => {
    setVisible(!visible);
  };

  return (
    <div style={{ textAlign: 'center', padding: '20px' }}>
      <button onClick={toggleVisibility} style={{ margin: '10px', padding: '10px 20px', border: '1px solid #ccc', borderRadius: '5px' }}>
        {visible ? "Hide" : "Show"} Message
      </button>
      {visible && <p>This is a toggleable message!</p>}
    </div>
  );
}

export default App;
