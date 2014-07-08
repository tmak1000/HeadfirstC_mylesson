#include<stdio.h>

enum response_type {DUMP,SECOND_CHANCE,MARRIAGE};
typedef struct{
  char *name;
  enum response_type type;
}response;



void dump(response r){
  printf("to %s,\n",r.name);
  puts("sorry, ");
  puts("I don't love you.");
}

void second_chance(response r){
  printf("to %s,\n",r.name);
  puts("hey, ");
  puts("I like you.tell me!");
}

void marriage(response r){
  printf("to %s,\n",r.name);
  puts("congraturation!, ");
  puts("I marry you.");
}
void (*replies[])(response) ={dump,second_chance,marriage} ;
int main(){

  response r[] = {
    {"Mike",DUMP},{"luis",SECOND_CHANCE},
    {"Matto",SECOND_CHANCE},{"William",MARRIAGE}
  };
  int i;
  for(i = 0;i < 4;i++){
    /*    switch(r[i].type){
    case DUMP:
      dump(r[i]);
      break;
    case SECOND_CHANCE:
      second_chance(r[i]);
      break;
    default:
      marriage(r[i]);
      }*/
    replies[r[i].type](r[i]);//(replies[r[i].type])(r[i]);
}
  return 0;
}
