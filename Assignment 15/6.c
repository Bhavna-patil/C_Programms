#include<stdio.h>
void display(int [],int);
int main()
{
    int n=7,i,a[7]={34,78,90,34,12,13,56};
    for(i=0;i<7;i++)
    printf("%d ",a[i]);
    printf("\nArray in reverse order:=");
    display(a,7);
    return 0;
}

void display(int b[],int n)
{
    int i;
    for(i=n-1;i>=0;i--)
    printf("%d ",b[i]);
}