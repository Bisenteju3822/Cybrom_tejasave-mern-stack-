import Child from './Child';
import Child2 from './Child2';


const App = () => {
    let b=prompt("we are the best")
      
    return (
        <>
        <Child2 boy={b}></Child2>
            <Child name={b} />
        </>
    );
};

export default App;
