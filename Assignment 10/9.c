#include<stdio.h>
int f1(int,int);
int main()
{
    int a,b;
    printf("Enter a number and a digit");
    scanf("%d%d",&a,&b);
    if(f1(a,b))
    printf("\n%d number contain digit %d",a,b);
    else
    printf("%d number not contain digit %d",a,b);
    return 0;
}

int f1(int num,int dig)
{
    int t;
    while(num)
    {
        t=num%10;
        if(t==dig)
        return 1;
        num=num/10;
    }
    return 0;
}