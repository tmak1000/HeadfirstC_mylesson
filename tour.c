#include<stdio.h>



typedef struct island{
  char *name;
  char *opens;
  char *closes;
  struct island *next;
}island;

void display(island *start){
  island *i = start;
  for(;i != NULL;i = i->next){
    printf("name : %s time:%s-%s\n",i->name,i->opens,i->closes);
  }
}

int main(){

  island amity = {"amity","09:00","17:00",NULL};
  island craggy = {"craggy","09:00","17:00",NULL};
  island isla_nublar = {"isla_nublar","09:00","17:00",NULL};
  island shutter = {"shutter","09:00","17:00",NULL}; 

  amity.next = &craggy;
  craggy.next = &isla_nublar;
  isla_nublar.next = &shutter;

  island skull = {"skull","09:00","17:00",NULL};
  isla_nublar.next = &skull;
  skull.next = &shutter;
  display(&amity);
  return 0;
}
