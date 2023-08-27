#include<stdio.h>
#include<math.h>
int main()
{
    int num,n,count=0,i,num2=0,k=1,j;
    printf("Armstrong number under 1000:=\n");
    for(j=1;j<1000;j++)
 {
    count=0;
    num2=0;
    num=j;
    n=num;
      while(n)
      {
        n=n/10;
        count++;
      }
      n=num;
      while(num)
      {
       k=1;
       for(i=1;i<=count;i++)
       k*=num%10;
       num2+=k;
       num=num/10;
      }
    if(n==num2)
    printf("%d ",n);
 }
    return 0;
}