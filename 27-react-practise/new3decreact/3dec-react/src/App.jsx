import "./App.css";
import Nav from './Nav';

function App() {
    let st = {
        backgroundColor: "yellow",
        color: "black"
    };

    return (
        <>
            <Nav />
            <h1 style={{backgroundColor: "red", color: "white"}}>We have to prepare for this</h1>
            <h3 style={st}>We are to decide this</h3>
            <h4 className="practise">new boy</h4>
        </>
    );
}

export default App;
