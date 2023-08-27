#include<stdio.h>
#include<string.h>
char* strlwr(char a[])
{
    int i;
    for(i=0;a[i];i++)
     if(a[i]>='A'&&a[i]<='Z')
      a[i]=a[i]+32;
    return a;  
}
int main()
{
    char str[20];
    printf("\nEnter a string:=");
    fgets(str,20,stdin);
    str[strlen(str)-1]=0;
    printf("\nstring in lower case:=%s",strlwr(str));
    return 0;
}