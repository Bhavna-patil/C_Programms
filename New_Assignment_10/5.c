#include<stdio.h>
int main()
{
    int a,b,i,x;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    x=a>b?b:a;
    for(i=2;i<=x/2;i++)
    {
        if(a%i==0&&b%i==0)
        break;
    }
    if(i==x/2+1)
    printf("Co-prime number");
    else
    printf("Not a co-prime number");
    return 0;
}