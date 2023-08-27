#include<stdio.h>
int lcm(int ,int);
int main()
{
    int a,b;
    printf("Enter two number:=");
    scanf("%d%d",&a,&b);
    printf("lcm is %d",lcm(a,b));
    return 0;
}

int lcm(int x,int y)
{
    int i,l,k;
    k=x>y?y:x;
    l=x>y?x:y;
    for(i=k;i<l*k;i++)
      if(i%x==0&&i%y==0)
      return i;
}