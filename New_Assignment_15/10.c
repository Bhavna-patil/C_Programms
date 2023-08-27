#include<stdio.h>
int fact(int);
int seriessum(int);
int fact(int a)
{
    int i,fact=1;
    for(i=1;i<=a;i++)
    fact*=i;
    return fact;
}
int seriessum(int n)
{
    int i,sum=0;
    for(i=1;i<=n;i++)
    sum+=fact(i)/i;
    return sum;
}

int main()
{
    int n;
    printf("Enter the term number");
    scanf("%d",&n);
    printf("Sum of first %d terms of series is %d",n,seriessum(n));
    return 0;
}