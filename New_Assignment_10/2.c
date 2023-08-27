#include<stdio.h>
int main()
{
    int a=-1,b=1,c,i,n;
    printf("Enter the value of n");
    scanf("%d",&n);
    printf("First n term of fibonacci series are:-\n");
    for(i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
    }
   return 0;
}