#include<stdio.h>
int main()
{
    char s[20],*p;
    int i;
    printf("Enter string");
    fgets(s,20,stdin);
    p=s;
    for(i=0;*(p+i);i++);
  printf("Length of string is %d",i-1);
  return 0;
}