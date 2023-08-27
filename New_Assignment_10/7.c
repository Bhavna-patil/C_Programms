#include<stdio.h>
int main()
{
    int i,a,b,j,k;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    k=a>b?a:b;
    printf("Prime number between %d & %d\n",a,b);
    for(i=a>b?b+1:a+1;i<k;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            break;
        }
        if(i==j)
        printf("%d ",i);
    }
}