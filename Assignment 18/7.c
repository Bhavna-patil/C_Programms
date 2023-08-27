#include<stdio.h>
#include<string.h>
int main()
{
    char a[10],b[10];
    int k;
    gets(a);
    strcpy(b,a);
    k=strcmp(a,strrev(b));
    printf("%d",k);
    if(k==0)
     printf("string is palindrom");
     else
     printf("string is not palindrom");
     return 0;
}