#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        k='A';
        for(j=1;j<=5;j++,k++)
            j>=i?printf("%c",k): printf(" ");
        printf("\n");    
    }
    return 0;
}