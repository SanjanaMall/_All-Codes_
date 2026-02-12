/*let src = {
    age: 21,
    name: 'sanjana',
    city: 'hyderabad',
    height: 5.3
};

//iteration
let desc = {};

for(let key in src){
    let newKey = key;
    let newValue = src[key];
    desc[newKey] = newValue;
}

src.age = 22;
console.log(src);
console.log(desc);
try{
    console.log(x);
}
catch(err){
    throw new Error("bhai pahle declare karo uske baad print karo");
}


//spread clonning
//let desc = {...src};

//src.age = 20;
//console.log(src);
//console.log(desc);

const t1 = performance.now();
let src = {
    age: 21,
    name: 'sanjana',
    city: 'hyderabad',
    height: 5.3
};

//iteration
let desc = {};

for(let key in src){
    let newKey = key;
    let newValue = src[key];
    desc[newKey] = newValue;
}

src.age = 22;
console.log(src);
console.log(desc);

const t2 = performance.now();
console.log("total time taken by the code", t2 - t1);
*/


//CLOSURE PROPERTY
function outerfunction(){
    let name = "sanjana";
    function innerfunction(){
        let name = "mall";
        console.log(name);
    }
    innerfunction();
}
outerfunction();