#include<stdio.h>
#include<string.h>
int main()
{
    char a[15]="bhavna patil",b[15]="rupesh patil";
    int k;
    k=strcmp(a,b);
    if(k==0)
    printf("Equal string");
    if(k==-1)
    printf("strings are arranged in dictionary order");
    else
    printf("strings are opposite to dictionary order");
    return 0;
}