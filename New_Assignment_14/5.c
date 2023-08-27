#include<stdio.h>
void f1(int);
void f1(int n)
{
    int i;
    printf("First %d odd natural number :=\n",n);
    for(i=1;i<=n;i++)
    printf("%d ",2*i-1);
}

int main()
{
    int a;
    printf("Enter anumber");
    scanf("%d",&a);
    f1(a);
    return 0;
}