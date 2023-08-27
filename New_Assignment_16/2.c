#include<stdio.h>
void Nnum(int);
void Nnum(int n)
{
    if(n>0)
    {
        printf("%d ",n);
        Nnum(n-1);
    }
}

int main()
{
    Nnum(100);
    return 0;
}