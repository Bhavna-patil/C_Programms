#include<stdio.h>
int main()
{
    int n,i,a=-1,b=1,c;
    printf("Enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       c=a+b;
       a=b;
       b=c;
    }
   printf("%dth term of fibonacci series is %d",n,c);
   return 0;
}