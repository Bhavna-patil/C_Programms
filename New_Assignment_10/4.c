#include<stdio.h>
int main()
{
    int a,b,i,hcf=1;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    for(i=a>b?b:a;i>=a>b?b/2:a/2;i--)
    {
        if(a%i==0&&b%i==0)
        {
            hcf=i;
            break;
        }
    }
    printf("HCF of %d and %d is %d",a,b,hcf);
    return 0;
}