import { useState } from "react"

export default function MonthDropDown()
{
    let [month,setmonth] = useState("");

   function handler (event)
    {
        let selectedMonth = parseInt( event.target.value )  
        console.log(selectedMonth)  
        switch(selectedMonth)
        {
            case 1 : setmonth("January");break;
            case 2 : setmonth("February");break;
            case 3 : setmonth("March");break;
            case 4 : setmonth("April");break;
            default : break;
        }


    }
    return(
        <>
        <select  onChange={handler}>
            <option>select</option>
            <option>1</option>
            <option>2</option>
            <option>3</option>
            <option>4</option>
            <option>5</option>
            <option>6</option>
            <option>7</option>
            <option>8</option>
            <option>9</option>
            <option>10</option>
            <option>11</option>
            <option>12</option>
        </select>
        <p>{month}</p>
        </>
    )
}