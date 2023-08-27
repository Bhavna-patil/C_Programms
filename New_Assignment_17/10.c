#include<stdio.h>

int pow(int,int);
int pow(int x,int y)
{
   if(y==1)
   return x;
   return pow(x,y-1)*x;
}

int main()
{
    int n,m;
    printf("Enter a number And power");
    scanf("%d%d",&m,&n);
    printf("\n%d to the power %d is %d",m,n,pow(m,n));
    return 0;
}