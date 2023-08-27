#include<stdio.h>
void nprime(int);
int prime(int);
int prime(int a)
{
    int i;
    for(i=2;i<=a/2;i++)
    if(a%i==0)
    return 0;
    return 1;
}
void nprime(int n)
{
    int i=1;
    while(n)
    {
        i++;
        if(prime(i))
        {
           printf("%d ",i);
           n--;
        }
    }
}

int main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    printf("First %d prime numbers are := ",num);
    nprime(num);
    return 0;
}