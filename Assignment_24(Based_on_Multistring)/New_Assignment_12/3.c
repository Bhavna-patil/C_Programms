#include<stdio.h>
int main()
{
    int i,j,row,k;
    printf("Enter rhe value of row");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        k=1;
        for(j=1;j<=2*row-1;j++)
            if(j>=row+1-i&&j<=row+i-1&&k)
            {
             printf("*");
             k=0;
            }
            else
            {
              printf(" ");
              k=1;
            }
        printf("\n");    
    }
    return 0;
}