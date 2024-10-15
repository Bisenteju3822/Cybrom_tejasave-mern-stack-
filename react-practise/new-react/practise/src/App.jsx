
import 'bootstrap/dist/css/bootstrap.min.css'; // Import 
import AppName from './componets/AppName';
import AddTodo from './componets/Addtodo';
import Todoitem1 from './componets/Todoitem1';
import Todoitem2 from './componets/Todoitem2';
import './App.css';
function App() {
  return (
    <center className='todo-container'>
  <AppName></AppName>
  <AddTodo></AddTodo>
  <div className='items=contianer'>
  <Todoitem1></Todoitem1>
  <Todoitem2></Todoitem2>
  </div>

   </center>
    
  );
}

export default App;
