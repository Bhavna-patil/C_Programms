#include<stdio.h>
int main()
{
    int a=5,*p,**q,***r;
    p=&a;
    q=&p;
    r=&q;
    printf("\n%d %d %d %d",a,*p,**q,***r);
    printf("\n%d %d %d",&a,*q,**r);
    printf("\n%d %d ",q,*r); 
    printf("\n%d",&r) ;
    return 0; 
}