import { Component } from "react";

export default class Halfstring extends Component
{
    
    constructor()
    {
       
        super()
        this.state={original : ""};

    }
      handeler = (event)=>
      {    
            var s="";
           let str = document.getElementById("i1").value
           console.log(str)
           console.log(str.length)
            for(let i =str.length-1 ; i>(str.length-1)/2;i--)
            {
                 s=s+str[i]
             this.setState({original : s})
            
            }
      }

    render()
    {
        return(
            <>
            enter string :
            <input type="text" id="i1"></input>
            <input type="button" name="click here" value={"click here!!"} onClick={this.handeler}></input>
            <p> reverse string : {this.state.original}</p>
            </>
        )
    }
}