#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
            j<=i?printf("%d",j): printf(" ");
        printf("\n");    
    }
    return 0;
}