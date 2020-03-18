
//Word Blanks
    function wordBlanks(myNoun, myAdjective, myVerb, MyAdverb){
    var result = "";
    result += "The" + " " +  myAdjective + " " + myNoun + " " +  myVerb + "to the store " + "" + MyAdverb;
    //Your code above this line
    return result;
    }

    //Change the words here to test your function
    console.log(wordBlanks("dog","big","ran","quickly"));

//Store Multiple Values with Arrays
    //var ourArray = ["John", 23];
    //var myArray = ["Charlie", 65];

//Nested Array or Multidimensional Array

    //var ourArray = [["the universe", 42], ["everything", 10110]] ;
    //var myArray = [["Bulls",23],["Tims",58]]; 

//Access Array Data with Indexes
/*-
    var ourArray = [50,60,70];
    var ourData = ourArray[0]; // equals 50

//Setup
    var myArray =[50,60,70];
    var myData = myArray[2];
    console.log(myData)

*/
//Modify Array Data with Indexes
    var ourArray = [18,64,99];
    ourArray[1] = 45; // ourArray now equals [18,45,99]

    //Setup
    var myArray = [18,64,99];
    myArray[0] = 45;
    console.log(myArray)




