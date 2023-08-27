#include<stdio.h>
int dup(int a[],int);
int main()
{
    int a[10],i,n=10;
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    if(dup(a,10))
    printf("\nelement has adjacent duplication:=%d",dup(a,10));
    else
    printf("\n there is no adjacent duplication in array");
    return 0;
}

int dup(int b[],int n)
{
    int i;
    for(i=0;i<n-1;i++)
    {
        if(b[i]==b[i+1])
        break;
    }
    if(i==n-1)
    return 0;
    return b[i];
}