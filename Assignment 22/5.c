#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,sum=0,i;
    p=calloc(5,sizeof(int));
    *p=2;
    *(p+1)=3;
    *(p+2)=2; 
    *(p+3)=0;
    *(p+4)=1;
    for(i=0;i<5;i++)
    sum+=*(p+i);
    free(p);
    printf("Enter number");
    p=calloc(5,sizeof(int));
    for(i=0;i<5;i++)
    {
     scanf("%d",p+i);
     sum+=*(p+i);
    }
    printf("Sum of arrays =%d",sum);
}