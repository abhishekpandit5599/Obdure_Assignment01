// Write your own substring function in javascript.

const subStringFun=(str,start,last)=>{
    let newArray=[];
    for(let i=0;i<last;i++){
        if(i>=start && i<last){
            newArray.push(str[i]);
        }
    }
    return newArray.join('');
}

console.log(subStringFun('Abhishek',2,7));

// Output
// hishe