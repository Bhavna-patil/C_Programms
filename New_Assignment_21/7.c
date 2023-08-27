#include<stdio.h>
#include<string.h>
char* strrvr(char a[],int size)
{
    char b[size];
    int i,k=size-1;
    strcpy(b,a);
    for(i=0;k>=0;i++,k--)
      a[i]=b[k];
    return a;  
}
int main()
{
    char str[20];
    printf("\nEnter a string:=");
    fgets(str,20,stdin);
    str[strlen(str)-1]=0;
    printf("\nReveres of string is:=%s",strrvr(str,strlen(str)));
    return 0;
}