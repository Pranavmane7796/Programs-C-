import Welcome from './welcome';
import Greeting from './greeting';
import './App.css';
import Math from './math';
import Total from './total';
import Icard from './icard';
import HelloClass from './helloClass';
import {hello as Hello} from './hello';

function App() {
  let arr=[1,2,3,4,5];
  let obj = {
    name : "pranav",
    id:123
  }
  return (
    <>
      <Welcome/>
      <HelloClass></HelloClass>
      <Greeting/>
      <Math title={"Math"} num={5} num2={10} />
      <Total arr1={arr} />
      <Icard {...obj} ></Icard>
      <Hello name="pranav"></Hello>

    </>
  );
}
export default App;
