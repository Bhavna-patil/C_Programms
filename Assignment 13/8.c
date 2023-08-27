#include<stdio.h>
int fib(int);
int main()
{
    int n,i;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    printf("%d ",fib(i));
    return 0;
}

int fib(int n)
{
  if(n==1||n==0)
  return n;
  n=fib(n-1)+fib(n-2);
  return n;
}