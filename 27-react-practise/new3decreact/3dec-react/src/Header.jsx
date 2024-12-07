import React, { useState } from 'react';

const HoverComponentFunction = () => {
  const [bgColor, setBgColor] = useState('white');

  const handleMouseEnter = () => {
    setBgColor('lightblue');
  };

  const handleMouseLeave = () => {
    setBgColor('white');
  };

  const handleClick = () => {
    setBgColor('blue');
  };

  return (
    <div onClick={handleClick}>
      <div
        style={{ backgroundColor: bgColor, padding: '20px', textAlign: 'center' }}
        onMouseEnter={handleMouseEnter}
        onMouseLeave={handleMouseLeave}
      >
        Hover over me!
      </div>
    </div>
  );
};

export default HoverComponentFunction;
