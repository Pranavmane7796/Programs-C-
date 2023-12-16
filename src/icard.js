export default function icard(props){
    console.log(props.name)
    // console.log(props.name)
    return(
        <>
        <p>{props.name}{" "}{props.id}</p>
        </>
    )
}