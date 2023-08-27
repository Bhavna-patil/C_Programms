#include<stdio.h>
void squere(int);
void squere(int n)
{
    if(n>0)
    {
        squere(n-1);
        printf("%d ",n*n);
    }
}

int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    printf("Squeres of First %d natural numbers are := \n",n);
    squere(n);
    return 0;
}