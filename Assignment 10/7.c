#include<stdio.h>
int fact(int);
int main()
{
  int n,r,k;
  printf("Enter the value of n(number od item)&r(number):=");
  scanf("%d%d",&n,&r);
  k=fact(n)/(fact(r)*fact(n-r));
  printf("Combination is = %d",k);
}

int fact(int n)
{
    int fact=1,i;
   for(i=1;i<=n;i++)
   fact*=i;
   return fact;
}