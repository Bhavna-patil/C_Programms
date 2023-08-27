#include<stdio.h>
void unique(int [],int);
int main()
{
    int a[10],i;
    printf("Enter array values\n");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    printf("Array with unique element:=\n");
    unique(a,10);
    return 0;
}

void unique(int b[],int n)
{
    int i,j=0,k;
   for(j=0;j<n;j++){
    for(i=j+1;i<n;i++)
    {
     if(b[j]==b[i])
     {
         k=b[i];
         b[i]=b[j+1];
         b[j+1]=k; 
         j++;
     }
    }
    printf("%d ",b[j]);
    }
}