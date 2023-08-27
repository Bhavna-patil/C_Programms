#include<stdio.h>
int count_duplicate_no_of_element(int[],int);
void sort(int[],int);
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
}

int count_duplicate_no_of_element(int a[],int n)
{
   int i=0,j=1,count=0;
   sort(a,n);
   while(i<n-1)
   {
     if(a[i]==a[j])
      count++;
      while(a[i]==a[j])
      j++;
      i=j;
      j=j+1;
   }
   return count;
}

int main()
{
    int a[10],i,n=10;
    for(i=0;i<n;i++)
      scanf(" %d",&a[i]);
    printf("\nTotal number of duplicate values in the array is %d",count_duplicate_no_of_element(a,n)); 
    return 0;
}