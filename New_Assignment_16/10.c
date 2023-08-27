#include<stdio.h>
void reverse(int);
void reverse(int n)
{
   if(n!=0)
   { 
    printf("%d",n%10);
    reverse(n/10);
   }
}

int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    printf("Reverse of %d is:= ",x);
    reverse(x);
    return 0;
}