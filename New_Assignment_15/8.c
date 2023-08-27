#include<stdio.h>
void pascle(int);
int combi(int,int);
int fact(int);
int fact(int a)
{
    int i,fact=1;
    for(i=1;i<=a;i++)
    fact*=i;
    return fact;
}
int combi(int n,int r)
{
    return fact(n)/fact(r)/fact(n-r);
}

void pascle(int row)
{
    int i,j,k,l;
    for(i=0;i<row;i++)
    {
        k=1,l=0;
        for(j=1;j<=row*2-1;j++)
        {
            if(j>=row-i&&j<=row+i&&k)
            {
              printf("%2d",combi(i,l));
              l++;
              k=0;
            }
            else
            {
                printf("  ");
                k=1;
            }
        }
        printf("\n");
    }
}

int main()
{
    pascle(10);
    return 0;
}