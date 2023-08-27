#include<stdio.h>
void f1(int ,int);
int prime(int);
int main()
{
    int a,b;
    printf("Enter two number:=");
    scanf("%d%d",&a,&b);
    f1(a,b);
    return 0;
}
  
void f1(int a,int b)
{
    int i,k,l;
    l=a>b?a:b;
    k=a>b?b+1:a+1;
    for(i=k;i<l;i++)
    {
        if(prime(i))
        printf("%d ",i);
    }
}

int prime(int x)
{
   int i;
   for(i=2;i<x;i++)  
   if(x%i==0)
   return 0;
   return 1;
}