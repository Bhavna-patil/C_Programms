#include<stdio.h>
int Isprime(int);
int Isprime(int a)
{
    int i;
    for(i=2;i<=a/2;i++)
    if(a%i==0)
    return 0;
    return 1;
}

int main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    printf(Isprime(a)?"prime number":"Not a prime number");
    return 0;
}

