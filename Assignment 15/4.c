#include<stdio.h>
void rot(int [],int,int,int);
int main()
{
    int a[5]={3,6,8,4,9},p,d;
    printf("Enter position and direction(1=left&0=right)\n");
    scanf("%d%d",&p,&d);
    printf("\nArray after %d time rotation",p);
    rot(a,5,p,d);
    return 0;
}

void rot(int b[],int n,int p,int d)
{
    int i,c[n],k=0;
    for(i=0;i<n;i++)
    c[i]=b[i];
    if(d==0)
    p=n-p;
        for(i=0;i<n;i++)
        {
            if(p<n)
            {
                b[i]=b[p];
                p++;
            }
            else{
                b[i]=c[k];
                k++;
            }
        }
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
}