#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    printf("%d ",2*i);
    return 0;
}