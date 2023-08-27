#include<stdio.h>
int sumN(int);
int main()
{
    int a;
    printf("Enter anumber");
    scanf("%d",&a);
    printf("sum of first %d odd natural number is %d" ,a,sumN(a));
    return 0;
}

int sumN(int a)
{
   int sum=0;
    if(a==1)
    return 1;
   return sum=(2*a-1)+sumN(a-1);
}