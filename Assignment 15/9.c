#include<stdio.h>
void merge(int [],int [],int);
int main()
{
    int a[5]={12,6,4,3,1},b[5]={13,4,3,2,1};
    merge(a,b,5);
    return 0;
}

void merge(int a[],int b[],int n)
{
    int i,j,c[2*n],k=0,max;
    for(i=0;i<2*n;i++)
    {
        if(i<n)
        c[i]=a[i];
        else
        {
        c[i]=b[k];
        k++;
        }  
    }
    printf("merged array:=")
    for(i=0;i<2*n;i++)
    printf("%d ",c[i]);
    max=c[0];   
    printf("\n sorted array:=");
    for(i=0;i<2*n;i++)
    {
      for(j=i+1;j<2*n;j++){
       if(c[i]<c[j])
       {
           k=c[j];
           c[j]=c[i];
           c[i]=k;
       }
       }
       printf("%d ",c[i]);
    }
}