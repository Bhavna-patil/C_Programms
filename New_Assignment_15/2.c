#include<stdio.h>
int hcf(int,int);
int hcf(int a,int b)
{
    int i;
    for(i=a>b?b:a;i>=1;i--)
    if(a%i==0 && b%i==0)
    return i;
}

int main()
{
    int a,b;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    printf("HCF of %d & %d is %d",a,b,hcf(a,b));
    return 0;
}
