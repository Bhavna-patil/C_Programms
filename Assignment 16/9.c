#include<stdio.h>
int main()
{
    int a[3][3],i,j,zeros=0;
    printf("Enter the element of a metrix:=\n");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);
    for(i=0;i<3;i++) 
    {
      for(j=0;j<3;j++)
     {
       if(a[i][j]==0)
       zeros++;
     }
    }
    if((i*j)/2<zeros)
    printf("Sparse matrix");
    else
    printf("not a sparse matrix");
    return 0;
}