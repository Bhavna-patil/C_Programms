#include<stdio.h>
int main()
{
    int i,a,b,j,k;
    printf("Enter a number");
    scanf("%d",&a);
    printf("Next Prime number of  %d\n:=",a);
    for(i=a+1;;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            break;
        }
        if(i==j)
        {
           printf("%d ",i);
           break;
        }
    }
}