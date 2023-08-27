#include<stdio.h>
int fact(int);
int main()
{
  int n,r,k;
  printf("Enter the value of n(number od item)&r(number):=");
  scanf("%d%d",&n,&r);
  k=fact(n)/fact(n-r);
  printf("number of arrangment = %d",k);
}

int fact(int n)
{
    int fact=1,i;
   for(i=1;i<=n;i++)
   fact*=i;
   return fact;
}