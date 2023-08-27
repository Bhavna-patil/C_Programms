#include<stdio.h>
#include<math.h>
int main()
{
    int num,n,count=0,i,num2=0,k=1;
    printf("Enter a number");
    scanf("%d",&num);
    n=num;
    while(n)
    {
        n=n/10;
        count++;
    }
    n=num;
    while(num)
    {
       k=1;
       for(i=1;i<=count;i++)
       k*=num%10;
       num2+=k;
       num=num/10;
    }
    printf("%d",num2);
    if(n==num2)
    printf("\n%d is an Armstrong number",n);
    else
    printf("\n%d is not an armstrong number",n);
    return 0;
}