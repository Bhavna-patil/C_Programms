#include<stdio.h>

int sum(int);
int sum(int n)
{
   int s=0;
   if(n>0)
   s=sum(n-1)+2*n-1;
   return s;
}

int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    printf("\n sum of first %d odd natural num is %d",n,sum(n));
    return 0;
}