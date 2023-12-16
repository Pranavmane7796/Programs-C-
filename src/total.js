export default function total(props){

    let a = props.arr1
    const[state , setstate] = useState("")
    // console.log(props.arr1.length)
    console.log(a)
    let sum=0;
    for(let i=0;i<a.length;i++){
        sum+=a[i]
    }
    console.log(sum);

    return(
        <>
        <p>summation= {sum}</p>
        </>
    )
}
