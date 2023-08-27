#include<stdio.h>
int sumN(int);
int main()
{
    int a;
    printf("Enter anumber");
    scanf("%d",&a);
    printf("sum of first %d even natural number is %d" ,a,sumN(a));
    return 0;
}

int sumN(int a)
{
   int sum=0;
    if(a==1)
    return 2;
   return sum=(2*a)+sumN(a-1);
}