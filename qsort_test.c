#include<stdio.h>
#include<stdlib.h>

int compare_scores(const void* score_a,const void* score_b){
  int a = *(int*)score_a;
  int b = *(int*)score_b;
  return a - b;

}
/*
void qsort(void *array,size_t length,size_t item_size,
	   int(*compar)(const void *,const void *)){
  
};
*/
int main(){
  int scores[] = {543,32,3232,554,11,2,112};
  for(i = 0;i < 7;i++){
    printf("%d",scores[i]);
  }printf("\n");
  qsort(scores,7,sizeof(int),compare_scores);
    for(i = 0;i < 7;i++){
    printf("%d",scores[i]);
  }printf("\n");
  return 0;
}
