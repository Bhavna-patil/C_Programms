#include<stdio.h>
void input(int[3][]);
void input(int a[3][])
{
    int i,j;
    for(i=0;i<3;i++)
     for(j=0;i<3;j++)
       scanf("%d",&a[i][j]);
}
void print(int a[3][])
{
   int i,j;
   for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
     {
       printf("%d ",a[i][j]);
     }
     printf("\n");
    }
}
int[  ] sum(a[3][],b[3][])
{
    int c[3][3],i,j;
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    c[i][j]=a[i][j]+b[i][j];
    return c[0];
}
int main()
{
    int a[3][3],b[3][3];
    printf("\nEnter the element of 1st metrix:=");
    input(a[0]);
    printf("\nEnter the element of 2nd metrix:=");
    printf("\nSum of two metrices:=");
    sum(a[0],b[0]);
    return 0;
}