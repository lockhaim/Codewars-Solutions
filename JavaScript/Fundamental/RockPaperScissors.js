/*
Rock Paper Scissors
Let's play! You have to return which player won! In case of a draw return Draw!.

Examples(Input1, Input2 --> Output):

"scissors", "paper" --> "Player 1 won!"
"scissors", "rock" --> "Player 2 won!"
"paper", "paper" --> "Draw!"

*/

const rps = (p1, p2) => {
  var winner = ''; 
  
  if((p1 === 'rock' && p2 === 'paper') || (p1 === 'paper' && p2 === 'scissors') || (p1 === 'scissors' && p2 === 'rock')){
    winner = 'Player 2 won!';
  } else {
  if((p1 === "paper" && p2 === 'rock') || (p1 === 'scissors' && p2 === 'paper') || (p1 === 'rock' && p2 === 'scissors')){
    winner = "Player 1 won!";
    } else {
  if(p1 === p2){
    winner = 'Draw!';
  }
  }
  }
  
    return winner;
  
};