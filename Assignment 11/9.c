#include<stdio.h>
int squer(int);
int main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    printf("squer is %d",squer(a));
    return 0;
}

int squer(int a)
{
    return a*a;
}