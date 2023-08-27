#include<stdio.h>
float area(float);
int main()
{
    float r,a;
    printf("Enter radious");
    scanf("%f",&r);
    a=area(r);
    printf("Area of circle is %f",a);
    return 0;
}

float area(float r)
{
    return 3.141*r*r;
}