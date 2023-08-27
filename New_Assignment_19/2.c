#include<stdio.h>
void input(int[],int);
int smallest_num(int[],int);
int main()
{
    int i,n,k;
    printf("Enter Array size:=");
    scanf("%d",&n);
    int a[n];
    input(a,n);
    k=smallest_num(a,n);
    printf("Smallest num is %d",k);
    return 0;
}

void input(int b[],int n)
{
    int i;
    for(i=0;i<n;i++)
     scanf("%d",&b[i]);
}

int smallest_num(int b[],int n)
{
    int i,min;
    min=b[0];
    for(i=0;i<n-1;i++)
    {
        if(b[i]<min)
        {
           min=b[i];
        }
    }
    return min;
}