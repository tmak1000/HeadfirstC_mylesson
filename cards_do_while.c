#include<stdio.h>
#include<stdlib.h>

int main(){
  char card_name[3];
  int count = 0;
  do {
  puts("Please enter card's name");
  scanf("%2s",card_name);
  int val = 0;
  switch(card_name[0]){
  case 'K':
  case 'Q':
  case 'j':
    val = 10;
    break;
  case 'A':
    val = 11;
    break;
  case 'X':
    puts("bye!");
    break;
  default:
    val = atoi(card_name);
    if(!((0 < val) && (10 < val))){
      puts("error!");
      continue;
    }
  }
  if((2 < val) && (val < 7)){
    count++;
  } else if (val == 10){
    count--;
  }
  printf("currentry count:%i\n ",count);
  }while(card_name[0] != 'X');
  return 0;
}
