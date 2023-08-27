#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,*q;
    printf("Enter two number:= ");
    p=malloc(sizeof(int));
    scanf("%d",p);
    q=malloc(sizeof(int));
    scanf("%d",q);
    if(*p>*q)
    printf("%d is greater",*p);
    else
    printf("%d is greater",*q);
    return 0;
}