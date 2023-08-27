#include<stdio.h>
void rvrs_ary(int [],int);
int main()
{
    int a[10],i;
    printf("enter values:=\n");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    printf("\nArray in reverse order:-");
    rvrs_ary(a,10);
     return 0;
}

void rvrs_ary( int b[],int n)
{
  int i;
  for(i=n-1;i>=0;i--)
     printf("%d ",b[i]);
}