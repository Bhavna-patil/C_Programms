#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    int i;
    fgets(a,20,stdin);
    printf("String in upper case:=\n")
    for(i=0;i<strlen(a);i++)
    {
       if(a[i]>=65&&a[i]<=90)
       printf("%c",a[i]);
       else
       printf("%c",a[i]-32);
    }
    return 0;
}