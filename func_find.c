#include<stdio.h>
#include<string.h>

int NUM_ADS = 7;
  char *ADS[] = {
    "William: SMB GSOH likes sports, TV,dining",
    "Matt: SWM NS likes art,movies,theater",
    "Luis: SLM ND likes books,theater,art",
    "Mike: DWM DS likes trucks,sports and bieber",
    "Peter: SAM likes chees,working,out and art",
    "Josh: SJM likes sports ,movies and theater",
    "Jed: DBM likes theater ,books and dining",
  };

void find();


int main(){


  find();

  return 0;
};

void find()
{
  int i;
  puts("find result:");
  puts("----------------------------------------");

  for(i = 0;i < NUM_ADS;i++){
    if(strstr(ADS[i],"sports") 
       && !strstr(ADS[i],"bieber")){
      printf("%s\n",ADS[i]);
    }
  }

  puts("----------------------------------------");
}
