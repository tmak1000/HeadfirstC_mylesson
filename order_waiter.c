#include<stdio.h>

float total = 0.0;
short count = 0;
short tax_percent = 6;

float add_with_tax(float f){
  float tax_rate = 1 + tax_percent / 100.0 ;
  total = total +(f * tax_rate);
  count = count + 1;
  return total;
}

int main(){
  float val;
  printf("Please enter price of order for end is -1: ");
  while(scanf("%f",&val) == 1){
    if(val == -1){
      break;
	}else{
    printf("total:%.2f\n",add_with_tax(val));
    printf("price");
    }
  }
  printf("\nfinal total:%.2f\n",total);
  printf("count:%hi\n",count);
  return 0;
}
