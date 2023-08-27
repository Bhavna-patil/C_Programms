#include<stdio.h>
#include<math.h>
float area(float);
int main()
{
  float r;
  printf("Enter the value of radius of circle:=");
  scanf("%f",&r);
  printf("Area of circle is %f",area(r));
  return 0;
}

float area(float r)
{
   return 3.14*pow(r,2);
}