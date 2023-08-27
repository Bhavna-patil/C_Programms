#include<stdio.h>
int sumN(int);
int main()
{
    int a;
    printf("Enter anumber");
    scanf("%d",&a);
    printf("sum of digit of %d  number is %d" ,a,sumN(a));
    return 0;
}

int sumN(int a)
{
   int sum=0;
    if(a==0)
    return 0;
   return sum=a%10+sumN(a/10);
}