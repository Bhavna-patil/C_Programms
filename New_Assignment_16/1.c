#include<stdio.h>
void Nnum(int);
void Nnum(int n)
{
    if(n>0)
    {
      Nnum(n-1);
      printf("%d ",n);
    }
}
int main()
{
   Nnum(100);
   return 0;
}