#include<stdio.h>
int main()
{
    int a[10],i,j,k,n=8;
    printf("Enter numbers\n");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    for(j=0;j<=1;j++)
    {
        for(i=0;i<=n;i++)
        {
            if(a[i]>=a[i+1])
            {
                k=a[i];
                a[i]=a[i+1];
                a[i+1]=k;
            }
        }
        n--;
    }
    printf("\n second largest number is %d",a[i]);
    return 0;
}