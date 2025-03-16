JS --version: ES6

<---- Blocks scope ---->
var: bloc,not fonction block
let: no one
const: no one
```
function test(){
    var x=5
}
console.log(x)
```
// Blocks: {....}
// Function Block: function() {....}

<---- Hoisting ---->
console.log(a); // Output: undefined
var a;
// Hoisting is only applicable to 'var'.

<---- Redeclaration ---->
var a = 6;
var a = 2;
// Redeclaration is only allowed with 'var'.

<---- Reassignment ---->
let a = 3;
a = 7;
// 'let' and 'var' allow reassignment. 'const' does not allow reassignment.

