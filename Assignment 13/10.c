#include<stdio.h>
int power(int,int);
int main()
{
    int a,b;
    printf("Enter a number & enter the power");
    scanf("%d%d",&a,&b);
    printf("%d to the power  %d is %d",a,b,power(a,b));
    return 0;
}

int power(int a,int b)
{
  int c=1;
   if(b==0)
   return 1;
    return a*power(a,b-1);
}