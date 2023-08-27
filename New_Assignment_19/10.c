#include<stdio.h>
void frequency_count(int[],int);
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

void frequency_count(int a[],int n)
{
    int i=0,j=1;
    while(i<n-1)
    {
       printf("Frequency of %d:=",a[i]);
       while(a[i]==a[j])
       j++;
       printf(" %d\n",j-i);
       i=j;
       j++;
       if(i==n-1)
       printf("Frequency of %d= %d",a[i],j-i);
    }
}
int main()
{
    int a[10],i;
    printf("Enter Array element:=");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    sort(a,10);
    frequency_count(a,10);
    return 0;
}