#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,n,sum=0,i;
    printf("Enter value of n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        p=malloc(sizeof(int));
        scanf("%d",p);
        sum+=*p;
        free(p);
    }
    printf("\n sum=%d",sum);
    return 0;
}