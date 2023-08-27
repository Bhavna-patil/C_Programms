#include<stdio.h>
int factN(int);
int main()
{
    int a;
    printf("Enter anumber");
    scanf("%d",&a);
    printf("factorial of %d  number is %d" ,a,factN(a));
    return 0;
}

int factN(int a)
{
   int fact=1;
    if(a==1)
    return 1;
   return fact= a*factN(a-1);
}