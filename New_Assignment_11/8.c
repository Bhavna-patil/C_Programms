#include<stdio.h>
int main()
{
    int i,j,k=1;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
            j<=i?printf("%d",k++): printf(" ");
        printf("\n");    
    }
    return 0;
}