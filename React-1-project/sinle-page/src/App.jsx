import { useState } from 'react';

const App = () => {
  const [h, setH] = useState(false);

  return (
    <>
      <button onClick={() => setH(true)}>Show</button>
      {h && <h1>This is heading</h1>}
    </>
  );
}

export default App;
