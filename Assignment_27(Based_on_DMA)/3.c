//Write a program to calculate sum of n numbers entered by user using malloc and free(),
//also store this values dynamically;
#include<stdio.h>
int main()
{
    int sum=0,*p=NULL,*q=NULL,a,j,size=1;
    printf("Enter numbers:=");
    printf("\nEnter Zero if u don't want to enter values more****\n"); 
    p=(int*)malloc(size*4);
    while(1)
    {
       scanf("%d",&a);
       if(a==0)
          break;
       q=(int*)malloc(size*4);
       for(j=0;j<size;j++)
          q[j]=p[j];
       q[size-1]=a;  
       free(p); 
       p=(int*)malloc(size*4);
       for(j=0;j<size;j++)
          p[j]=q[j];
       size++;
       free(q);
    }
    for(j=0;j<size-1;j++)
     sum+=p[j];
    printf("\nSum is %d",sum);
    free(p);
    return 0;
}
