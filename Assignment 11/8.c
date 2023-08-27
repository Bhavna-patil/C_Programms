#include<stdio.h>
void pascal(int);
int combi(int,int);
int fact(int);
void pascal(int row)
{
    int i,j,k=1,r;
    for(i=1;i<=row;i++)
    {
        r=0;
        for(j=1;j<=row*2-1;j++)
        {
            if(j>=row+1-i&&j<=row+i-1&&k)
            {
                printf("%d",combi(i-1,r));
                r++;
                k=0;
            }
            else{
            printf(" ");
            k=1;}
        }
        printf("\n");
    }
}

int combi(int n,int r)
{
    int c;
    c=fact(n)/(fact(r)*fact(n-r));
    return c;
}

int fact(int a)
{
    int i,fact=1;
    for(i=1;i<=a;i++)
    fact*=i;
    return fact;
}
 
 int main()
 {
     int a;
     printf("Enter the value of row\n");
     scanf("%d",&a);
     pascal(a);
 }