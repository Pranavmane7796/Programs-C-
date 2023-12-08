<!DOCTYPE html>
<html>
    <head>
        <title>
            Currency Converter
        </title>
        <script>
            function converter()
            {
                let s1=document.getElementById("s1").value
                console.log(s1)
                let s2=document.getElementById("s2").value
                console.log(s2)
                let textval=+document.getElementById("i1").value
                console.log(typeof(textval));
                let result
               
                switch (s1)
                {
                    case "₹" : 
                    switch(s2)
                    {
                        case "€":
                            result=textval*90.34;
                            break;
                            case "$":
                                result=textval*83.80
                                break;
                                case "₳" :
                                    result=textval*67.34
                                    break;

                    }
                    

                }
                document.getElementById("p1").innerHTML=result;

            }
        </script>
    </head>
    <body>
            <h2 align="center">Currency Converter</h2>
            <hr>
           
        <span>
            <form>
                
        select currency from 
        <br>
         <select id="s1" onchange="converter()">
            <option>select</option>
            <option> &#x20b9</option>
            <option> &#8364</option>
            <option > &#36</option>
            <option > &#8371</option>

         </select>
         <br>
         <caption>Enter the Amount</caption> <br>
         <input id="i1" type="number" placeholder="enter the value"><br>
   
            select currency to
            <br>
         <select id="s2" onchange="converter()">
            <option>select</option>
            <option > &#x20b9</option>
            <option > &#8364</option>
            <option > &#36</option>
            <option > &#8371</option>

         </select>
            </form>
        </span>
        <span>
            <p id="p1">
                result : 
            </p>
        </span>

    </body>
</html>

<!-- 
Write HTML to show a CurrencyConverter 
 textfield - number from :dropdown ( dollar, yen, rupee, pound, euro ,) 
 to: dropdown 
 convert-button
Show Title and labels appropriately  -->
