#include<stdio.h>
int main()
{
    int a[10], i,min;
    printf("Enter array element:=\n");
    for(i=0;i<10;i++)
       scanf("%d",&a[i]);
    min=a[0];   
    for(i=1;i<9;i++)
    {
        if(a[i]<min)
        min=a[i];
    }
    printf("smallest number is %d",min);
    return 0;
}