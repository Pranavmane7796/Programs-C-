import { useState } from 'react';

export default function Sayhi()
{
    // const [hi , sethi]=useState("")
    const[hi , sethi]=useState(true)
    const handler =function(e)
    {
        if(hi)
        {
            document.getElementById("p1").innerHTML="hiiiiii"
            sethi(false)
        }
        if(!hi)
        {
            document.getElementById("p1").innerHTML=""
            sethi(true)
        }
        
       
    }

    return(
        <>
        <input type="button" name="click!" value={"click"} onClick={handler}></input>
        <p id="p1">{}</p>

        </>
    )
}