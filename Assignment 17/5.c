#include<stdio.h>
#include<string.h>
int main()
{
    char a[27];
    int i;
    fgets(a,27,stdin);
    printf("String in lower case:=\n");
    for(i=0;i<strlen(a);i++)
    {
       if(a[i]>=97&&a[i]<=122)
       printf("%c ",a[i]);
       else
       printf("%c ",a[i]+32);
    }
    return 0;
}