#include<stdio.h>
void fib(int);
int main()
{
    int n;
    printf("Enter the value of n");
    scanf("%d",&n);
    fib(n);
}

void fib(int n)
{
    int a=-1,b=1,c;
    while(n)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
        n--;
    }
}