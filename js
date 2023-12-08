<!DOCTYPE html>
<html>

<head>
    <title>
        Currency Converter
    </title>
    <script>

        function converter() {
            let s1 = document.getElementById("s1").value
            console.log(s1)
            let s2 = document.getElementById("s2").value
            console.log(s2)
            let textval = parseInt(document.getElementById("i1").value)
            console.log(typeof (textval));
            let result

            switch (s1) {

                case "₹":
                    switch (s2) {
                        case "€":
                            result = textval * 90.34;
                            break;
                        case "$":
                            result = textval * 83.80
                            break;
                        case "₳":
                            result = textval * 67.34
                            break;

                    }
                    break

                case "€":
                    switch (s2) {
                        case "₹":
                            result = textval * .101;
                            break;
                        case "$":
                            result = textval * 83.80
                            break;
                        case "₳":
                            result = textval * 67.34
                            break;
                    }
                    break;

                case "$":
                    switch (s2) {
                        case "₹":
                            result = textval * 90;
                            break;
                        case "€":
                            result = textval * 83.80
                            break;
                        case "₳":
                            result = textval * 67.34
                            break;
                    }
                    break
                case "₳":
                    switch (s2) {
                        case "₹":
                            result = textval * 100;
                            break;
                        case "€":
                            result = textval * 83.80
                            break;
                        case "$":
                            result = textval * 67.34
                            break;
                    }
                    break;


            }
            if (result != undefined) {
                let copy = result.toFixed(2);
            }
            document.getElementById("p1").innerHTML = `<b>${result}</b>`;


        }
    </script>
</head>

<body>
    <h2 align="center">Currency Converter</h2>
    <hr>

    <div>

        <form>
            <fieldset>
                <legend align="center">Convert The Currency</legend>
                select currency from
                <br>
                <select id="s1" onchange="converter()">
                    <option>select</option>
                    <option> &#x20b9</option>
                    <option> &#8364</option>
                    <option> &#36</option>
                    <option> &#8371</option>

                </select>
                <br>
                <caption align="center">Enter the Amount</caption> <br>
                <input id="i1" type="number" placeholder="enter the value"><br>

                Select Currency To
                <br>
                <select align="center" id="s2" onchange="converter()">
                    <option>select</option>
                    <option> &#x20b9</option>
                    <option> &#8364</option>
                    <option> &#36</option>
                    <option> &#8371</option>
                </select>
            </fieldset>
        </form>
    </div>
    <div>
        result :
        <p id="p1">
        </p>
    </div>

</body>

</html>
