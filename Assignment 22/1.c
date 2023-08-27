#include<stdio.h>
#include<stdlib.h>
int main()
{
  char *p,c;
  int i=0,j=1;
  p=(char*)malloc(sizeof(char));
  printf("Enter string");
  while(c!='\n')
  {
    c=getc(stdin);
    j++;
    p=(char*)realloc(p,j*sizeof(char));
    p[i]=c;
    i++;
  }
  p[i]='\0';
  printf("\nThe entered string is %s",inputstring());
  free(p);
  return 0;
}