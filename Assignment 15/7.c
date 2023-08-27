#include<stdio.h>
int dup(int a[],int);
int c=0;
int main()
{
    int a[10],i;
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    printf("\ntotal number of duplicates element is %d",dup(a,10));
    return 0;
}

int dup(int b[],int n)
{
  int j,i;
  for(j=0;j<n;j++)
  {
      for(i=j+1;i<n;i++){
      if(b[j]==b[i])
      {
          c++;
          break;}
      if(j==n-1)
      return 0;}
  }
  return c;
}