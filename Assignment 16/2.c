#include<stdio.h>
int main()
{
    int i,j,a[3][3],b[3][3],c,k;
    printf("Enter the element of first metrix\n");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);
    printf("Enter the element of second matrix\n");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&b[i][j]);
    printf("multiplication of two matrix:=\n");
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
            c=0;
             for(k=0;k<3;k++)
             {
                 c+=a[i][k]*b[k][j];
             }
            printf("%d ",c); 
         }
         printf("\n");
     }
   return 0; 
}