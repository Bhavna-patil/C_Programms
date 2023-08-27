#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    int i,k;
    fgets(a,20,stdin);
    if(strlen(a)<=20)
    k=strlen(a)-1;
        for(i=k;i>=0;i--)
    {
       printf("%c",a[i]);
    }
    return 0;
}