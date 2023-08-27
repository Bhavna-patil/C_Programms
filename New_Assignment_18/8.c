#include<stdio.h>
int main()
{
    int a[10], i,min,min_2nd;
    printf("Enter array element:=\n");
    for(i=0;i<10;i++)
       scanf("%d ",&a[i]);
    if(a[0]>a[1])
    {
        min=a[1];
        min_2nd=a[0];
    }
    else
    {
        min=a[0];
        min_2nd=a[1];
    }
    for(i=0;i<10;i++)
    {
       if(a[i]<min)
       {
         min_2nd=min;
         min=a[i];
       }
       else if(a[i]<min_2nd)
       {
         min_2nd=a[i];
       }
    }
    printf("Second smallest number is %d",min_2nd);
    return 0;
}