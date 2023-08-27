#include<stdio.h>
int hcf(int ,int);
int main()
{
    int a,b;
    printf("Enter two number:=");
    scanf("%d%d",&a,&b);
    printf("hcf is %d",hcf(a,b));
    return 0;
}

int hcf(int x,int y)
{
    int i,l,k;
    k=x>y?y:x;
    l=x>y?x:y;
    for(i=k;i>=1;i--)
      if(x%i==0&&y%i==0)
      return i;
}