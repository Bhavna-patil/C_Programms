#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,a;
    printf("Enter Size");
    scanf("%d",&a);
    p=malloc(a);
    if(p==NULL)
    printf("Memory allocation is fail");
    //free the memory of useless dma variable
    else
    printf(" allocated size is %d",a);
    return 0;
}