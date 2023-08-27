#include<stdio.h>
void merge(int[],int[],int,int[]);
int main()
{
    int a[5]={10,9,7,6,4},b[5]={8,5,3,2,1},n,c[10];
    n=5;
    printf("\nArray after merging:=");
    merge(a,b,n,c);
    return 0; 
}
void merge(int a[],int b[],int n,int c[])
{
    int i=0,j=0,k=0;
    while(i<n&&j<n)
    {
      if(a[i]>b[j])
      {
        c[k]=a[i];
        i++;
      }
      else
      {
        c[k]=b[j];
        j++;
      }
      k++;
    }
    if(i==n)
    {
      while(j<=n-1)
      {
       c[k]=b[j];
       k++;
       j++;
      }
    }
    else if(j==n)
    {
      while(i<=n-1)
      {
        c[k]=a[i];
        k++;
        i++;
      }
    }
   for(i=0;i<2*n;i++)
   printf("%d ",c[i]);
}