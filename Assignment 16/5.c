#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum=0,k=3;
    printf("Enter the element of a metrix:=\n");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);
    for(i=0;i<3;i++) 
    {
        k--;
        sum+=a[i][k];
    }
    printf("Sum of left diagonal is %d",sum);
    return 0;
}