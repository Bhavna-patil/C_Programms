#include<stdio.h>
int main()
{
    int i,j,row;
    printf("Enter rhe value of row");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=2*row-1;j++)
            j>=i&&j<=2*row-i?printf("*"): printf(" ");
        printf("\n");    
    }
    return 0;
}