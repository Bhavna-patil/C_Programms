#include<stdio.h>
void unique_element(int[],int);
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

void unique_element(int A[],int size)
{
    int i,j;
    sort(A,size);
    i=0;
    j=1;
   printf("\n");
    while(i<=size-2)
    {
        printf("%d ",A[i]);
        while(A[i]==A[j])
            j++;
        i=j;
        j=j+1;
        if(i==size-1)
        printf("%d",A[i]);
    }
}

int main()
{
    int a[10],i;
    for(i=0;i<10;i++)
      scanf("%d",&a[i]);
    printf("\nunique element:=");
    unique_element(a,10);
    return 0;  
}