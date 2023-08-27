#include<stdio.h>
void oct(int);
int main()
{
    int n;
    printf("Enter the value of n");
    scanf("%d",&n);
    oct(n);
    return 0;
}

void oct(int n)
{
    if(n>1)
    oct(n/8);
    printf("%d",n%8);
}