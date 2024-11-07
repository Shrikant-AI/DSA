const studentDatabase = ['John','Alex','Matt','Patt','Max'];

const findStudent =(allstudents , studentName)=>{
   for(let i=0;i<studentDatabase.length;i++){
    if(studentName==allstudents[i])
        {console.log(`Found ${studentName}`)}
   }
}

// findStudent(studentDatabase , 'John');

const numbers = [1,2,3,4,5];

const findPairs =(arr)=>{
   for(let i=0;i<arr.length;i++){
      for(let j=0;j<arr.length;j++){
         console.log(`Pair: ${arr[i]},${arr[j]}`)
      }
   }
}

// findPairs(numbers);


//** Watch from 00:30 min => how to create */

//* Reverse a String =>

const reverseString = (string)=>{
   let splitString = string.split("");
   // console.log(`Split String is ${splitString}`)
   let reverseString = splitString.reverse();
   let finalString = reverseString.join("");
   console.log(`Reversed String is ${finalString}`)
   console.log(`${finalString===string?true:false}`)
}


reverseString ('JALAJ')