#include<stdio.h>
int main()
{
    int a[3][3],i,j,sumR,sumC,k=1;
    printf("Enter the element of a metrix:=\n");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);
    printf("upper tringular of  metrix:=\n");
    for(i=0;i<3;i++) 
    {
      for(j=0;j<3;j++)
     {
       if(j>=2-i)
      printf("%d",a[i][j]);
      else
      printf(" ");
     }
     printf("\n");
    }
    return 0;
}