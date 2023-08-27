#include<stdio.h>
void sort(int*,int);
int main()
{
    int a[10],i;
    printf("Enter array element");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    sort(a,10);
    return 0;
}
void sort(int *ptr,int size)
{
    int i,j,k;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(*(ptr+i)>*(ptr+j))
            {
               k=*(ptr+i);
               *(ptr+i)=*(ptr+j);
               *(ptr+j)=k;
            }
        }
        printf("%d ",*(ptr+i));
    }
}