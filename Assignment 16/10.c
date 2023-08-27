#include<stdio.h>
int main()
{
    int a[3][3],i,j,ones=0,k=0,l=0;
    printf("Enter the element of a metrix:=\n");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);
    for(i=0;i<3;i++) 
    {
      ones=0;
      for(j=0;j<3;j++)
     {
       if(a[i][j]==1)
       ones++;
     }
      if(k<ones)
      {
        k=ones;
        l=i+1;
      }
     
    }
    printf(" row %d has maximum no of ones",l);
    return 0;
}