#include<stdio.h>
int nextprime(int);
int prime(int);
int main()
{
    int a;
    printf("Enter a number:=");
    scanf("%d",&a);
    printf("next prime no is %d",nextprime(a+1));
    return 0;
}

int nextprime(int x)
{
   while(x<2*x)
   {
   if(prime(x)) 
   break;
   x++;   
   }
   return x;
}

int prime(int x)
{
   int i;
   for(i=2;i<x;i++)  
   if(x%i==0)
   return 0;
   return 1;
}