#include<stdio.h>
void octal(int);
void octal(int n)
{
    if(n!=0)
    {
        octal(n/8);
        printf("%d",n%8);
    }
}

int main()
{
    int n;
    printf("Enter a decimal number");
    scanf("%d",&n);
    printf("Ocatal eqevalent of %d is :=\n",n);
    octal(n);
    return 0;
}