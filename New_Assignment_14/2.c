#include<stdio.h>
float si(float,int,float);
float si(float p,int r,float t)
{
   return (p*r*t)/100;
}

int main()
{
    float p,t;
    int r;
    printf("Enter principal rate and time");
    scanf("%f%d%f",&p,&r,&t);
    printf("Simpal interest is %f",si(p,r,t));
    return 0;
}