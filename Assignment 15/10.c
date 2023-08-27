#include<stdio.h>
void frequency(int [],int);
int main()
{
    int i,a[10];
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    frequency(a,10);
    return 0;
}

void frequency(int a[],int n)
{
    int i,j=0,k,f;
   for(j=0;j<n;j++){
       f=1;
    for(i=j+1;i<n;i++)
    {
     if(a[j]==a[i])
     {
         k=a[i];
         a[i]=a[j+1];
         a[j+1]=k; 
         j++;
         f++;
     }
    }
    printf("\n frequency of %d is %d ",a[j],f);
    }
}