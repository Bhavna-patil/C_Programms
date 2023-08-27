#include<stdio.h>
void primefact(int);
int prime(int);
int main()
{
  int n;
  printf("Enter a number:=");
  scanf("%d",&n);
  primefact(n);
}

void primefact(int n)
{
  int i;
  for(i=2;i<=n;i++) 
  {
    if(prime(i))
    while(n%i==0)
    {
      printf("%d ",i);
      n=n/i;
    }
  }
}

int prime(int a)
{
  int i;
  for(i=2;i<a;i++)
  {
    if(a%i==0)
    return 0;
  }
  return 1;
}