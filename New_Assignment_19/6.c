#include<stdio.h>
void input(int[],int);
int main()
{
    int i,n,i1,i2;
    printf("Enter the size of array");
    scanf("%d",&n);
    int a[n];
    input(a,n);
    printf("\nEnter the endices for swapping");
    scanf("%d%d",&i1,&i2);
    printf("\nArray after swapping:=");
    swap(a,n,i1,i2);
    for(i=0;i<n;i++)
      printf("%d ",a[i]);
    return 0;
}
void input(int a[],int n)
{
    int i;
    printf("Enter Array Element:=\n");
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
}
void swap(int b[],int n,int i1,int i2)
{
    int temp;
    temp=b[i1];
    b[i1]=b[i2];
    b[i2]=temp;
}