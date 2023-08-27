#include<stdio.h>
void ntermfib(int);
void ntermfib(int n)
{
    int a=-1,b=1,c=0;
    while(n)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
        n--;
    }
}

int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    printf("%d Terms of fibonacci:=\n",n);
    ntermfib(n);
    return 0;
}