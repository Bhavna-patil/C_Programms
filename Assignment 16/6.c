#include<stdio.h>
int main()
{
    int a[3][3],i,j,sumR,sumC,k=1;
    printf("Enter the element of a metrix:=\n");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);
    for(i=0;i<3;i++) 
    {
      sumR=0;
      sumC=0;
       for(j=0;j<3;j++) 
       {
           sumR+=a[i][j];
           sumC+=a[j][i];
       }
       printf("\n sum of row %d is %d",k,sumR);
       printf("\n sum of column %d is %d",k++,sumC);
    }
    return 0;
}