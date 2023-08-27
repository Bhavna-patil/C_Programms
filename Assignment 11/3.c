#include<stdio.h>
int prime(int );
int main()
{
    int a;
    printf("Enter a number:=");
    scanf("%d",&a);
    if(prime(a))
    printf("prime");
    else
    printf("not prime");
    return 0;
}

int prime(int x)
{
   int i;
   for(i=2;i<x;i++)  
   if(x%i==0)
   return 0;
   return 1;
}