#include<stdio.h>
int main()
{
    int a=-1,b=1,c=0,n;
    printf("Enter a number");
    scanf("%d",&n);
    while(c<n)
    {
        c=a+b;
        a=b;
        b=c;
    }
    if(c==n)
    printf("Number is in fibonacci series ");
    else 
    printf("Number is not in fibonacci series");
    return 0;
}