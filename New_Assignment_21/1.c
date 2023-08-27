#include<stdio.h>
int main()
{
    char a[20];
    int i;
    printf("Enter  a string:=");
    fgets(a,20,stdin);
    for(i=0;a[i];i++);
    printf("\nLength of the string is %d",--i);
    return 0;
}