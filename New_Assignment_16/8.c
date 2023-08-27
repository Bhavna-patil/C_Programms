#include<stdio.h>
void binary(int);
void binary(int n)
{
   if(n!=0) 
   {
    binary(n/2);
    printf("%d",n%2);
   }
}

int main()
{
    int n;
    printf("Enter adecimal number");
    scanf("%d",&n);
    printf("Binary equevalent of %d is:=\n",n);
    binary(n);
    return 0;
}