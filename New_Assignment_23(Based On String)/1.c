//palindrom string
#include<stdio.h>
#include<string.h>
int Is_palindrome(char*);
int Is_palindrome(char *str)
{
   int i,l;
   i=strlen(str);
   for(i=0;i<l/2;i++)
     if(str[i]!=str[i-1-i])
       return 0;
   return 1;
}

int main()
{
    char str[20]="kanak";
    if(Is_palindrome(str))
       printf("Palindrome string");
    else
       printf("Not a palindrome");
    return 0;
}