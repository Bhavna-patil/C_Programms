#include<stdio.h>
void f1(int);
void f1(int n)
{
    int i;
    printf("First %d natural number :=\n",n);
    for(i=1;i<=n;i++)
    printf("%d ",i);
}

int main()
{
    int a;
    printf("Enter anumber");
    scanf("%d",&a);
    f1(a);
    return 0;
}