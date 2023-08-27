#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,q,i;
    float evg=0;
    printf("Enter the number of values u want to calculate evarage\n");
    scanf("%d",&q);
    p=calloc(q,sizeof(int));
    printf("ENter numbers");
    for(i=0;i<q;i++)
    {
       scanf("%d",p);
       evg+=*p; 
    }
    free(p);
    printf("Evrage is %.3f",evg/q);
    return 0;
}