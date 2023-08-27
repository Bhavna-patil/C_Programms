#include<stdio.h>
void input(int[],int);
void sort(int[],int);
int main()
{
    int i,n;
    printf("Enter Array size:=");
    scanf("%d",&n);
    int a[n];
    input(a,n);
    printf("Sorted Array:=");
    sort(a,n);
    return 0;
}

void input(int b[],int n)
{
    int i;
    printf("\nEnter Array element:-");
    for(i=0;i<n;i++)
     scanf("%d",&b[i]);
}
void sort(int b[],int n)
{
    int i,j,t;
    for(i=1;i<n;i++)
    {
        for(j=0;j<=n-i;j++)
        {
            if(b[j]>b[j+1])
            {
               t=b[j];
               b[j]=b[j+1];
               b[j+1]=t;
            }
        }
    }
    for(i=0;i<n;i++)
    printf("%d ",b[i]);
}
