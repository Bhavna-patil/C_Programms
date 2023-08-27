#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum=0;
    printf("Enter the element of a metrix:=\n");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);
    for(i=0;i<3;i++) 
    {
        sum+=a[i][i];
    }
    printf("Sum of right diagonal is %d",sum);
    return 0;
}