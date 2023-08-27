#include<stdio.h>
int main()
{
   int i;
   char s[20];
   printf("Enter a string");
   fgets(s,13,stdin);
   for(i=0;s[i];i++);
   printf("Length of string is %d",i);
   return 0;
}