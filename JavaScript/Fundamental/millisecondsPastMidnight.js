//Clock shows h hours, m minutes and s seconds after midnight.
//Your task is to write a function which returns the time since midnight in milliseconds.

function past(h, m, s){
  var millMid = 0;
  millMid = (h*60*60*1000)+(m*60*1000)+(s*1000);
  return millMid;
}
