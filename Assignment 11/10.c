#include<stdio.h>
int series(int);
int fact(int);
int main()
{
      printf("sum of the series ia %d",series(5));

    return 0;
}

int series(int n)
{
    int i,sum=0;
    for(i=1;i<=5;i++)
     {
         sum+=fact(i)/i;
     }
     return sum;
}

int fact(int a)
{
    int i,fact=1;
    for(i=1;i<=a;i++)
    fact*=i;
    return fact;
}