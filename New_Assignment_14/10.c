#include<stdio.h>
int prime(int);
void primefact(int);
int prime(int a)
{
    int i;
    for(i=2;i<=a/2;i++)
    if(a%i==0)
    return 0;
    return 1;
}
 void primefact(int num)
 {
    int i=2;
    while(num)
    {
            while(num%i==0)
            {
             printf("%d ",i);
             num=num/i;
            }  
        i++;
    }
 }

 int main()
 {
    int n;
    printf("Enter a number:=");
    scanf("%d",&n);
    printf("Prime factors of %d are:=",n);
    primefact(n);
    return 0;
 }