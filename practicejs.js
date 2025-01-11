let div1=document.querySelector(".div");
let btn1= document.querySelector("#btn2");


let userScore=0;
let compScore=0;
const choices= document.querySelectorAll(".choices");
const userScorepara= document.querySelector("#userscore");
const compScorepara= document.querySelector("#cscore");
const msg= document.querySelector("#msg");
const gencompchoice=()=>{
const options=["rock","paper","scissor"];
const randIdx = (Math.floor(Math.random()*3));
return options[randIdx];
}
const showWinner = (userWin,choiceId,compchoice) => {
if(userWin){
userScore++;
userScorepara.innerText= userScore;
msg.innerText=`You win!, your ${choiceId} beats ${compchoice}`;
msg.style.backgroundColor="green";
}
else{
compScore++;
compScorepara.innerText= compScore;
msg.innerText=`You lose, your ${compchoice} beats ${choiceId}`;
msg.style.backgroundColor="red";
}
}
const drawGame= () => {
msg.innerText="draw";
msg.style.backgroundColor="#081b31";
}
const playGame= (choiceId) => {
console.log("user-choice=",choiceId);
const compchoice = gencompchoice();
console.log("computer choice=",compchoice);
if(choiceId===compchoice){
//draw
drawGame();

}
else{
let userWin= true;
if(choiceId==="rock"){
userWin= compchoice==="paper"? false: true;
}
else if(choiceId==="paper"    ){
userWin=compchoice==="scissor"?false: true;
}
else{
userWin= compchoice==="rock"? false:true;
}
showWinner(userWin,choiceId,compchoice);
}
}
choices.forEach((choice) => {
let fx=() => {
const choiceId= choice.getAttribute("id");

playGame(choiceId)
};

choice.addEventListener("click",fx);
});
