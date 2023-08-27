//Write a program to calculate the average of numbers stored in an array of size 10.
//Take array values from the user.
#include<stdio.h>
int main()
{
    int a[10],sum=0,i;
    float avrg;
    printf("Enter numbers");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("average is %f ",sum/10.0);
    return 0;
}