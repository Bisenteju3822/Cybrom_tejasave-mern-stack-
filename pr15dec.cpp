import{Routes, Route, Link} from 'react-router-dom';
import Home from './Home';

function App()
{
  return (
      <div>
      <nav>
      <ul>
      <li><Link to = "/">
          Home</ Link></ li>
      </ ul>
      </ nav>
      <Routes>
      <Route path = "/" element = {<Home />} />
      </ Routes>
      </ div>);
}

export default App;
