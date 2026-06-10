import { useState } from "react";

function app()
{
  const [count, setCount] = useState(0);

function incriment()
{
  setCount(count + 1 );
}

function decriment()
{
  setCount(count - 1);
}

function reset()
{
  setCount(0);
}

return (
  <div>
    <h1>counter</h1>
    <h2>{count}</h2>

    <button onClick={incriment}>Incriment</button>
    <button onClick={decriment}>Decriment</button>
  </div>
);

}

export default app;
