#include<stdio.h>
int lcm(int,int);
int lcm(int a,int b)
{
    int i;
    for(i=a>b?b:a;i<=a*b;i++)
    if(i%a==0&&i%b==0)
    return i;
}

int main()
{
    int a,b;
    printf("enter two number");
    scanf("%d%d",&a,&b);
    printf("LCM of %d & %d is %d",a,b,lcm(a,b));
    return 0;
}