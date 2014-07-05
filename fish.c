#include<stdio.h>

struct fish {
  const char *name;
  const char *species;
  int teeth;
  int age;
};

void catalog(struct fish f)
{
  printf("%s is %s ,teeth is %i .age is %i.\n",
	 f.name,f.species,f.teeth,f.age);
}

int main(){
  
  struct fish snappy = {"スナッピー","ピラニア",69,4};
  catalog(snappy);

  return 0;
}

