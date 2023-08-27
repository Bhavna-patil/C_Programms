#include<stdio.h>
int main()
{
    int i,j,row,k;
    printf("Enter rhe value of row");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        k='A';
        for(j=1;j<=2*row-1;j++)
            j>=i&&j<=2*row-i?printf("%c",k++): printf(" ");
        printf("\n");    
    }
    return 0;
}