#include<stdio.h>
void input(int[],int);
int first_occurance(int[],int);
int main()
{
   int a[10],n,i;
   n=10;
   input(a,n);
   if(first_occurance(a,n))
   printf("Value of element that has adjacent duplicate value:=%d",first_occurance(a,n));
   else
   printf("There is no adjacent duplicate values in the array");
   return 0;
}
void input(int a[],int n)
{
    int i;
    printf("Enter Array Element:=\n");
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
}
int first_occurance(int b[],int n)
{
    int i;
    for(i=0;i<n-1;i++)
     if(b[i]==b[i+1])
     return b[i];
    return 0; 
}