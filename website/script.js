function calcule(){
    var x=parseInt(document.getElementById("input1").value)
    var y=parseInt(document.getElementById("input2").value)
    var ope=document.getElementById("ope").value
    switch(ope){
        case '+':
            var z=x+y
            break
        case '-':
            var z=x-y
            break
        case '*':
            var z=x*y
            break
        case '/':
            var z=x/y
            break

    }
    document.getElementById("res").value=z
}
cc