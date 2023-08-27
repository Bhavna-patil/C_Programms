#include<stdio.h>
int main()
{
    int a[10], i,sum=0;
    printf("Enter array element:=\n");
    for(i=0;i<10;i++)
    {
       scanf("%d",&a[i]);
       sum+=a[i];
    }
    printf("sum of array element is %d",sum);
    return 0;
}