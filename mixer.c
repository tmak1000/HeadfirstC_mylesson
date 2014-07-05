#include<stdio.h>

typedef union{
  float lemon;
  int lime_pieces;
}lemon_lime;

typedef struct{
  float tequila;
  float cointreau;
  lemon_lime citrus;
}margarita;

int main(){
  margarita m ={2.0,1.0,.citrus.lemon=2};
  printf("%2.1f tequila\n%2.1f cointreau\n%2.1f juice\n",
	 m.tequila,m.cointreau,m.citrus.lemon);

  margarita n ={2.0,1.0,0.5};
  printf("%2.1f tequila\n%2.1f cointreau\n%2.1f juice\n",
	 n.tequila,n.cointreau,n.citrus.lemon);

  margarita o ={2.0,1.0,{.lime_pieces=1}};
  printf("%2.1f tequila\n%2.1f coinntreau\n%i lime\n",
	 o.tequila,o.cointreau,o.citrus.lime_pieces);

  
  return 0;
}
