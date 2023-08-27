#include<stdio.h>
int checkarm(int);
int checkarm(int num)
{
    int n,count=0,n1=0,i;
    n=num;
    while(n)
    {
        n=n/10;
        count++;
    }
    n=num;
    while(num)
    {
        int k=1;
        for(i=1;i<=count;i++)
         k*=num%10;
         n1+=k;
         num=num/10;
    }
    if(n1==n)
    return 1;
    return 0;
}

void printarm(int a,int b)
{
    int i,k;
    k=a>b?a:b;
    for(i=a>b?b+1:a+1;i<k;i++)
    if(checkarm(i))
    printf("%d ",i);
}

int main()
{
    int a,b;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    printf("Armstrong number under %d and %d:=\n",a,b);
    printarm(a,b);
    return 0;
}
