#include<stdio.h>
#include"encrypt.h"
#include"checksum.h"

int main()
{
  char s[] = "Speak friend and enter";
  encrypt(s);
  printf("'%s' encrypted!\n",s);
  printf("checksum is %i\n",checksum(s));
  encrypt(s);
  printf("'%s' re encrypted!\n",s);
  printf("checksum is %i\n",checksum(s));
  return 0;
}
