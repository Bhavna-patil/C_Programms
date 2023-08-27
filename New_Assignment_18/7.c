#include<stdio.h>
int main()
{
    int a[10],i,max,max_2d;
    printf("Enter array element:=\n");
    for(i=0;i<10;i++)
       scanf("%d ",&a[i]);
    if(a[0]>a[1])
    {
        max=a[0];
        max_2d=a[1];
    }
    else
     {
        max=a[1];
        max_2d=a[0];
     }
    for(i=0;i<10;i++)
    {
        if(a[i]>max)
        {
            max_2d=max;
            max=a[i];
        }
        else if(a[i]>max_2d)
        max_2d=a[i];
    }
    printf("Second largest number is %d",max_2d);
    return 0;
}