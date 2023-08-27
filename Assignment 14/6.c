#include<stdio.h>
int main()
{
    int a[10],i,n=8,j,k;
    printf("Enter numbers");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    printf("\narray in assending order:-");
    for(j=0;j<=9;j++)
    {
    for(i=0;i<=n;i++)
    {
      if(a[i]<=a[i+1])
      {
          k=a[i];
          a[i]=a[i+1];
          a[i+1]=k;
      }
    }
    printf("%d ",a[i]);
    --n;
    }
}