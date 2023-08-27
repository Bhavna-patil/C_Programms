#include<stdio.h>
int main()
{
    int a,b,*p,*q,count=0,i;
    printf("Enter two number\n");
    scanf("%d%d",&a,&b);
    p=&a;
    q=&b;
    for(i=a>b?(*q+1):(*p+1);i<(a>b?*p:*q);i++)
    count++;
    printf("%d",count);
    return 0;
}