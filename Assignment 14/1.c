#include<stdio.h>
int sum(int[],int);
int main()
{
    int a[10],i;
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    printf("sum is %d",sum(a,10));
}

int sum(int a[],int n)
{
  int i,s=0;
  for(i=0;i<n;i++)
  s+=a[i];
  return s;
}