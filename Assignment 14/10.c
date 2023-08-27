#include<stdio.h>
void copy(int [],int);
int main()
{
    int a[10],i;
    printf("Enter values");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    copy(a,10);
    return 0;
}
void copy(int b[],int n)
{
    int i;
    for(i=0;i<n;i++)
    printf("%d ",b[i]);

}
