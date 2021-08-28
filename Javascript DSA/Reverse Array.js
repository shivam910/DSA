// Program to rotate an array by d elements

var btn = document.querySelector(".rotate");
btn.addEventListener("click", Rotate);
var ans =document.getElementById("ans");

function Rotate() {
    var size = window.prompt("Enter the size of array");
    let i,
    arr =[],
    text = "";
  alert("size of array is " + size);

  for (i = 0; i < size; i++) {
    arr[i] = window.prompt(`Enter the ${i + 1}th element of the array`);
    text += arr[i] + " ";
  }

  document.getElementById("demo").innerHTML = "The input array is "+text;

  Reverse(arr, size);
}

function Reverse(arr,size){
    var text2="";

    for(i=size-1;i>=0;i--)
    text2+=arr[i]+" ";
    
    ans.innerHTML ="The reversed array is "+text2;
    ans.style.color ="green";
}

