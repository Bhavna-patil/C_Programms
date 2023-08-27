#include<stdio.h>
int f1(int);
int f1(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    fact*=i;
    return fact;
}

int main()
{
    int a,fact;
    printf("Enter anumber");
    scanf("%d",&a);
    fact=f1(a);
    printf("Factorial of %d is %d",a,fact);
    return 0;
}