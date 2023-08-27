#include<stdio.h>
#include<math.h>
float si(int,int,int);
int main()
{
  
  int p,r,t;
  printf("Enter the value of principal,rate of interest,time period:=\n");
  scanf("%d%d%d",&p,&r,&t);
  printf("interest:= %f",si(p,r,t));
  return 0;
}

float si(int a,int b,int c)
{
  return (a*b*c)/100 ; 
}