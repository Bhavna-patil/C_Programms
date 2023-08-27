#include<stdio.h>
int evenodd(int);
int main()
{
  int a;
  printf("Enter the number:=");
  scanf("%d",&a);
  if(evenodd(a))
  printf("Even");
  else
  printf("Odd");
  return 0;
}

int evenodd(int r)
{
  if(r%2)
  return 0;
  return 1;
}
