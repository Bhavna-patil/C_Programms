#include<stdio.h>
int nextprime(int);
int prime(int);
int prime(int a)
{
    int i;
    for(i=2;i<=a/2;i++)
    if(a%i==0)
    return 0;
    return 1;
}
int nextprime(int n)
{
    while(!prime(++n))
    return n;
}

int main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    printf("Next prime number of %d is %d",num,nextprime(num));
    return 0;
}