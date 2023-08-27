//Array Rotation:=
#include<stdio.h>
void input(int[],int);
void rot(int[],int,int,int);
int main()
{
    int a[10],p,d,i;
    int n=10;
    input(a,n);
    printf("Enter position an directon(0=left & 1=right)\n");
    scanf("%d%d",&p,&d);
    printf("Array after rotating %d times by ",p);
    printf(d==1?"right rotation:=\n  ":"left rotation:=\n");
    rot(a,n,p,d);
    return 0;

}
   
void input(int b[],int n)
{
    int i;
    printf("Enter Array element:=\n");
    for(i=0;i<n;i++)
    scanf(" %d",&b[i]);
}
/*void rot(int a[],int n,int p,int d)
{
    int i,b[n],k=0;
    for(i=0;i<n;i++)
     b[i]=a[i];
    if(d==1) 
    p=n-p;
     for(i=0;i<n;i++)
     {
        if(p<n)
        {
            a[i]=a[p];
            p++;
        }
        else
        {
         a[i]=b[k];
         k++;
        }
     }
  for(i=0;i<n;i++)
    printf("%d ",a[i]);
}*/
void rot(int a[],int n,int p,int d)
{
    int i,temp;
    if(d)
     {
        while(p)
        {
            temp=a[n-1];
            for(i=n-2;i>=0;i--)
             a[i+1]=a[i];
             a[0]=temp;
             p--;
        }
     }
     else
     {
        while(p)
        {
            temp=a[0];
            for(i=0;i<n-1;i++)
            a[i]=a[i+1];
            a[n-1]=temp;
            p--;
        }
     }
  for(i=0;i<n;i++)
    printf("%d ",a[i]);
}