#include<stdio.h>
#include<string.h>
int Find_Word(char *str,char *w) 
{
  char temp[20];
  int i,j=0,k;
  for(i=0;str[i];i++)
  {
     j=0;
     while(str[i]!=' '&&str[i])
       {
          temp[j]=str[i];
          j++;
          i++;
       }
       temp[j]=0;
       k=strcmp(temp,w);
       if(k==0)
       return 1;
  }
  return 0;
}
int main()
{
    char str[100],w[20];
    printf("Enter string");
    fgets(str,100,stdin);
    str[strlen(str)-1]=0;
    printf("Enter word:=");
    fgets(w,20,stdin);
    w[strlen(w)-1]=0;
    if(Find_Word(str,w)==1)
      printf("Present");
    else
      printf("Not present");
    return 0;
}