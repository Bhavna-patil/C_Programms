#include<stdio.h>
int main()
{
    char ch;
    printf("Ente a chrachter");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'A' ... 'B':
           printf("Alphabate in upper case");
           break;
        case 'a' ... 'b':
           printf("Alphabate in lower case");
           break;
        default:
           printf("some other special character");      
    }
  return 0;  
} 