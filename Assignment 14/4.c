#include<stdio.h>
int main()
{
    int a[10],i,k;
    printf("Enter numbers");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
        for(i=0;i<=9;i++)
        {
           if(a[i]>=a[i+1])
           {
               k=a[i];
               a[i+1]=a[i];
               a[i]=a[i+1];
           }
        }
    printf(" largest number is %d",k);
    return 0;
}