//9. Write a program in C to count the digits of a given number using recursion.
#include<stdio.h>
int countD(int);
int count=0;
int main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    printf("\n in %d number there are %d digit",a,countD(a));
    return 0;
}

int countD(int n)
{
    if(n>0)
    countD(n/10);
    return count++;
}