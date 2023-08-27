#include<stdio.h>
int main()
{
    int i,j,a[3][3],b[3][3];
    printf("Enter the element of first metrix\n");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);
    printf("Enter the element of second matrix\n");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&b[i][j]);
    printf("Sum of two matrix:=\n");
    for(i=0;i<3;i++){
    for(j=0;j<3;j++){
    printf("%d ",a[i][j]+b[i][j]);
    }
     printf("\n");}
}