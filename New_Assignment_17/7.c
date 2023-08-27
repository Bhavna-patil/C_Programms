#include<stdio.h>

int hcf(int,int);
int hcf(int x,int y)
{
   if(y==0)
   return x;
   return(hcf(y,x%y));
}

int main()
{
    int m,n;
    printf("Enter two number");
    scanf("%d%d",&m,&n);
    printf("\n HCF of %d & %d is %d",m,n,m>n?hcf(n,m%n):hcf(m,n%m));
    return 0;
} 