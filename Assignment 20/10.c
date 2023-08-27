#include<stdio.h>
int main()
{
    char a[10],*p,q;
    int i;
    p=a;
    printf("Enter string:=");
    fgets(a,10,stdin);
    for(i=9;i>=0;i--)
    {
      q=*(p+i);
      printf("%c",q);
    }
    return 0;
}