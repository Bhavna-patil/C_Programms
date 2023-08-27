#include<stdio.h>
void firstN(int);
int main()
{
  int n;
  printf("Enter the value of n:=");
  scanf("%d",&n);
  firstN(n);
  return 0;
}

void firstN(int n)
{
    int i;
   for(i=1;i<=n;i++)
   printf("%d ",i);
}