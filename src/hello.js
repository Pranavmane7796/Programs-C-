import { Component, useState } from "react";
// import './hello1.css'

export  class hello extends Component{
    render()
  {
   
        console.log(this.props.name)
        return(
       <> 
       <div className="outline">           
       <h1 style={{backgroundColor:this.props.color,textAlign:"center"}}>{this.props.name}</h1>
        <h1></h1>
        </div>
       </>
        )
        }
    
}