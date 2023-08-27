#include<stdio.h>
int main()
{
    int a[10], i,max;
    printf("Enter array element:=\n");
    for(i=0;i<10;i++)
       scanf("%d",&a[i]);
    max=a[0];   
    for(i=1;i<9;i++)
    {
       if(a[i]>max) 
       max=a[i];
    }
    printf("greatest number is %d",max);
    return 0;
}