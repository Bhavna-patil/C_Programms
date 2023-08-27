#include<stdio.h>
int main()
{
    int a[10],i,se=0,so=0;
    printf("Enter numbers");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]&1)
        so+=a[i];
        else
        se+=a[i];
    }
    printf("sumof all even number is %d & sum of all odd number is %d",se,so);
    return 0;
}