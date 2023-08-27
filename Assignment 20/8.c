#include<stdio.h>
int main()
{
    int a[10],i,*p,q,sum=0;
    p=a;
    printf("Enter array element");
    for(i=0;i<10;i++)
    scanf("%d",(p+i));
    for(i=0;i<10;i++)
    sum+=*(p+i);
    printf("\n sum is %d",sum);
    return 0;
}