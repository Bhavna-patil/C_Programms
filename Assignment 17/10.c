#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    int i,k,j,l,t;
    fgets(a,20,stdin);
    if(strlen(a)<=20)
    k=strlen(a)-1;
    printf("soted string array in ascending order :=\n");
    for(i=0;i<k;i++)
    {
      l=1;
      for(j=i+1;j<k;j++)
      {
          if(a[i]==a[j])
          {
              t=a[i+1];
              a[i+1]=a[j];
              a[j]=t;
              l++;
              i++;
          }
      }
      printf("\n frequency of %c is %d",a[i],l);
    }
    return 0;
}