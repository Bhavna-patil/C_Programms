#include<stdio.h>
void evennum(int n)
{
    if(n>0)
    {
        printf("%d ",2*n);
        evennum(n-1);
    }
}

int main()
{
    evennum(10);
    return 0;
}