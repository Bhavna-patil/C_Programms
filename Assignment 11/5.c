#include<stdio.h>
void Nprime(int);
int prime(int);
int main()
{
    int a;
    scanf("%d",&a);
    Nprime(a);
    return 0;
}

void Nprime(int n)
{
   int i=1;
   while(n)
   {
       while(i)
       {
           if(prime(i))
           {
               printf("%d ",i);
               i++;  
               break;        
           }
           i++;
       }
       n--;
   }
}

int prime(int x)
{
   int i;
   for(i=2;i<x;i++)  
   if(x%i==0)
   return 0;
   return 1;
}