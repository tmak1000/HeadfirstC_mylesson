#include<stdio.h>

  typedef struct {
    float tank_capacity;
    int tank_psi;
    const char *suit_material;
  }equipment;

  typedef struct scuba{
    const char *name;
    equipment kit;
  }diver;

  void badge(diver d)
  {
    printf("name :%s tank:%2.2f(%i) suits:%s\n",
	   d.name,d.kit.tank_capacity,d.kit.tank_psi,d.kit.suit_material);
  }

  int main(){
  
    diver randy = {"randy",{5.5,3500,"neoplain"}};
    badge(randy);
  return 0;
}
