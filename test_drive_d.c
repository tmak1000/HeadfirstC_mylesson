#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int compare_scores(const void* score_a,const void* score_b){
  int a = *(int*)score_a;
  int b = *(int*)score_b;
  return a - b;
}

int compare_scores_desc(const void* score_a,const void* score_b){
  int a = *(int*)score_a;
  int b = *(int*)score_b;
  return b - a;
}

typedef struct {
  int width;
  int height;
}rectangle;

int compare_areas(const void* a,const void* b){
  rectangle* ra = (rectangle*)a;
  rectangle* rb = (rectangle*)b;
  int area_a = (ra->width * ra->height);
  int area_b = (rb->width * rb->height);
  return area_a - area_b;
}


int compare_names(const void* a,const void* b){
  char** sa = (char**)a;
  char** sb = (char**)b;
  return strcmp(*sa,*sb);
}

int compare_areas_desc(const void* a,void* b){
  return compare_areas(b,a);//-compare_areas(a,b);
}

int compare_names_desc(const void* a,const void* b){
  return -compare_names(a,b);//or compare_names(b,a);
}
/*
int qsort(void *array,size_t length,size_t item_size,
	   int(*compar)(const void *,const void *));
*/
int main(){
  int scores[] = {543,32,3232,554,11,2,112};
  puts("point");
  int i = 0;
  for(i = 0;i < 7;i++){
    printf("%i ",scores[i]);
  }
  printf("\n");
  i = 0;
  qsort(scores,7,sizeof(int),compare_scores_desc);
  puts("point");
  for(i = 0;i < 7;i++){
    printf("%i ",scores[i]);
  }
  printf("\n");
  char *names[] = {"Karen","Mark","Brett","Molly"};
  qsort(names,4,sizeof(char*),compare_names);
  puts("name ");
  i = 0;
  for(i = 0;i < 4;i++){
    printf("%s ",names[i]);
  }
  printf("\n");

  
  return 0;
}
