#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    int i,k,j,l;
    fgets(a,20,stdin);
    a[strlen(a)-1]=0;
    k=strlen(a);
    printf("sorted string array in ascending order :=\n");
    for(i=1;i<k;i++)
    {
      for(j=0;j<k-i;j++)
      {
          if(a[j]>a[j+1])
          {
              l=a[j];
              a[j]=a[j+1];
              a[j+1]=l;
          }
      }
    }
    printf("%s",a);
    return 0;
} 