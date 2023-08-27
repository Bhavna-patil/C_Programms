#include<stdio.h>
int f1(int [],int,int);
int main()
{
    int a[12],i,n=12;
    printf("enter values");
    for(i=0;i<=11;i++)
    scanf("%d",&a[i]);
    printf("Values in sorted order:=\n");
    for(i=0;i<=11;i++){
    printf("%d ",f1(a,n,i));
    }
    return 0;
}

int f1(int b[],int n,int j)
{
    int i,k;
    for(i=j+1;i<n;i++)
    {
        if(b[j]>b[i])
        {
            k=b[j];
            b[j]=b[i];
            b[i]=k;
        }
    }
    return b[j];
}
