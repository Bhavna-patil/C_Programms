#include<stdio.h>
void input(int[],int);
int greatest_num(int[],int);
int main()
{
    int i,n,k;
    printf("Enter Array size:=");
    scanf("%d",&n);
    int a[n];
    input(a,n);
    k=greatest_num(a,n);
    printf("Greatest num is %d",k);
    return 0;
}

void input(int b[],int n)
{
    int i;
    for(i=0;i<n;i++)
     scanf("%d",&b[i]);
}

int greatest_num(int b[],int n)
{
    int i,max;
    max=b[0];
    for(i=0;i<n-1;i++)
    {
        if(b[i]>max)
        {
           max=b[i];
        }
    }
    return max;
}  