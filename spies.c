#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node{
  char *question;
  struct node *no;
  struct node *yes;
}node;

int yes_no(char *question)
{
  char answer[3];
  printf("%s? (y/n): ",question);
  fgets(answer,3,stdin);
  return answer[0] == 'y';
}

node* create(char *question)
{
  node *n = malloc(sizeof(node));
  n->question = strdup(question);
  n->no = NULL;
  n->yes = NULL;
  return n;
}

void release(node *n)
{
  if(n){
    if(n->no)
      release(n->no);
    if(n->yes)
      release(n->yes);
    if(n->question)
      free(n->question);
    free(n);
  }
}

int main()
{
  char question[80];
  char suspect[20];
  node *start_node = create("suspect have bear?");
  start_node->no = create("loletta.barnsworse");
  start_node->yes = create("benny.the.spoon");
  
  node *current;
  do{
    current = start_node;
    while(1){
      if(yes_no(current->question))
	{
	  if(current->yes){
	    current = current->yes;
	  }else{
	    printf("found!\n");
	    break;
	  }
	}else if(current->no){
	current = current->no;
      }else{
	/*make yes->node name by suspect*/
	printf("who is criminal?");
	fgets(suspect,20,stdin);
	node *yes_node = create(suspect);
	current->yes = yes_node;

	/*cpoy no_node this question*/
	node *no_node = create(current->question);
	current->no = no_node;

	/*change this question new question*/
	printf("This is true in %s, that question does not apply to the %s?\n"
	       ,suspect,current->question);//自分で課題をみつけきりひらいていく社員
	fgets(question,80,stdin);
	current->question = strdup(question);

	break;
      }
    }
  }while(yes_no("one more?"));
  release(start_node);

  return 0;
}
