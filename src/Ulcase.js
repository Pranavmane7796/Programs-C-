import { Component } from "react"

export default class Ulcase extends Component{
    constructor(){
        super();
        this.state={original:"", changed:""}
    
    }

    handler=(event)=>{
        let name=document.getElementById("text").value
        this.setState({original:name})
        let a=event.target.checked;
        console.log(a)
        let nm=event.target.name;
        console.log(nm);
        switch(nm){
            case "lcase" : console.log("lower")
                        let str1=name.toLowerCase()
                        this.setState({changed:str1})
            break;
            case "ucase" : console.log("upper");
                        let str2=name.toUpperCase();
                        this.setState({changed:str2})
                         break;
            case "tcase" :console.log("title");
                          let str3=name.charAt(0).toUpperCase()+ name.slice(1).toLowerCase();
                          this.setState({changed:str3})
                         break;
        }

        

    }

render(){
    return(
        <>
        Enter String:<input type="text" id="text"/>
        LowerCase:<input type="checkbox" name="lcase" onClick={this.handler}/>
        UpperCase:<input type="checkbox" name="ucase" onClick={this.handler}/>
        TitleCase:<input type="checkbox" name="tcase" onClick={this.handler}/>
        <p>{this.state.changed}</p>

        </>
    )
}

}