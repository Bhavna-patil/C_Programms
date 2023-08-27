#include<stdio.h>
#include<string.h>
int word(char []);
int main()
{
    char a[100];
    fgets(a,100,stdin);
   printf("There are %d word in a given string",word(a));
    return 0;
}
int word(char a[])
{
   int j=1,i;
  for(i=0;i<strlen(a);i++)
   {
   if(a[i]==32)
   j++;}
   return j;
}