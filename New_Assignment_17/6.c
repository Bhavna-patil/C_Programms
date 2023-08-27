#include<stdio.h>

int fact(int);
int fact(int n)
{
   int f=1;
   if(n!=0)
   f=fact(n-1)*n;
   return f;
}

int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    printf("\n factorial of %d is %d",n,fact(n));
    return 0;
}