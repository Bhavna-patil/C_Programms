#include<stdio.h>
int main()
{
    int a[10],i,*p,q;
    p=a;
    printf("Enter array element");
    for(i=0;i<10;i++)
    scanf("%d",p+i);
    for(i=9;i>=0;i--)
    {
      q=*(p+i);
      printf("%d",q);
    }
    return 0;
}