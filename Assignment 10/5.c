#include<stdio.h>
void oddN(int);
int main()
{
  int n;
  printf("Enter the value of n:=");
  scanf("%d",&n);
  oddN(n);
  return 0;
}

void oddN(int n)
{
    int i;
   for(i=1;i<=n;i++)
   printf("%d ",2*i-1);
}