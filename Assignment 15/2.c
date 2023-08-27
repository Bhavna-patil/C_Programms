#include<stdio.h>
int f1(int [],int);
int main()
{
    int a[12],i;
    printf("enter values");
    for(i=0;i<=11;i++)
    scanf("%d",&a[i]);
    printf("\n smallest number is %d",f1(a,12));
    return 0;
}

int f1(int b[],int n)
{
    int i,k;
    for(i=0;i<n;i++)
    {
        if(b[i]<=b[i+1])
        {
            k=b[i];
            b[i+1]=b[i];
        }
    }
    return b[i-1];
}