#include<stdio.h>
void primenum(int,int);
int prime(int);
int prime(int a)
{
    int i;
    for(i=2;i<=a/2;i++)
    if(a%i==0)
    return 0;
    return 1;
}
void primenum(int x,int y)
{
    int i,k;
    k=x>y?x:y;
    for(i=x>y?y+1:x+1;i<k;i++)
    if(prime(i))
    printf("%d ",i);
}

int main()
{
    int num1,num2;
    printf("Enter two number");
    scanf("%d%d",&num1,&num2);
    printf(" prime number between %d & %d:=",num1,num2);
    primenum(num1,num2);
    return 0;
}