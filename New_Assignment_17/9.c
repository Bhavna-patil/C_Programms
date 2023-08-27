#include<stdio.h>
int c=0;
int count(int);
int count(int n)
{
   if(n!=0)
   count(n/10);
   return c++;
}

int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    printf("\n number of digit in %d are %d",n,count(n));
    return 0;
}