#include<stdio.h>
int fact(int);
int combi(int,int);
int fact(int a)
{
    int i,fact=1;
    for(i=1;i<=a;i++)
    fact*=i;
    return fact;
}
int combi(int n,int r)
{
   return fact(n)/fact(r)/fact(n-r);
}


int main()
{
    int a,b;
    printf("Enter Items and selections");
    scanf("%d%d",&a,&b);
    printf("Total number of possible combinations are:= %d",combi(a,b));
    return 0;
}