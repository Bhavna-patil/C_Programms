#include<stdio.h>
int checkeven(int);
int checkeven(int a)
{
    if(a&1)
    return 0;
    return 1;
}
int main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    if(checkeven(a))
    printf("Even");
    else
    printf("Odd");
    return 0;
}