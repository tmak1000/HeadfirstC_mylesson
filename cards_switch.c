#include<stdio.h>
#include<stdlib.h>

int main(){
  char card_name[3];
  puts("Please enter card's name");
  scanf("%2s",card_name);
  int val = 0;
  /*  if(card_name[0] == 'k'){
    val = 10;
  }else if(card_name[0] == 'Q'){
    val = 10;
  }else if (card_name[0] == 'J'){
    val = 10;
  }else if (card_name[0] == 'A'){
    val = 11;
  }else {
    val = atoi(card_name);
  }*/

  switch(card_name[0]){
  case 'K':
    val = 10;
    break;
  case 'Q':
    val = 10;
    break;
  case 'j':
    val = 10;
    break;
  case 'A':
    val = 11;
    break;
  default:
    val = atoi(card_name);
  }

  if((2 < val) && (val < 7))
    puts("count  plus.");
  else if (val == 10)
    puts("count minus.");

  return 0;
}
