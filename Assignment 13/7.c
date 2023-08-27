#include<stdio.h>
int hcf(int ,int);
int main()
{
    int a,b;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    printf("hcf is %d",a>b?hcf(b,a%b):hcf(a,b%a));
    return 0;
}

int hcf(int a,int b)
{
    if(b==0)
    return a;
    hcf(b,a%b);
}