#include<stdio.h>
void oddnum(int);
void oddnum(int n)
{
    if(n>0)
    {
        oddnum(n-1);
        printf("%d ",2*n-1);
    }
}

int main()
{
    oddnum(10);
    return 0;
}