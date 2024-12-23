import { useEffect, useState } from "react";

const Color = () => {
  const [color, setColor] = useState("white");

  useEffect(() => {
    alert("Background color changed!");
    document.body.style.backgroundColor = color;
  }, [color]);

 

  return (
    <>
      <div>
        <h1>Click a Button to Change Background Color</h1>
        <button onClick={() => setColor('red')}>Red</button>
        <button onClick={() => setColor('blue')}>Blue</button>
        <button onClick={() => setColor('green')}>Green</button>
        <button onClick={() => setColor('yellow')}>Yellow</button>
      </div>
    </>
  );
};

export default Color;
