#include<stdio.h>
int checkdig(int,int);
int checkdig(int k,int l)
{
   while(k)
   {
     if(l==k%10)
     return 1;
     k=k/10;
   }
   return 0;
}

int main()
{
    int a,b;
    printf("Enter a number:=");
    scanf("%d",&a);
    printf("\nEnter a digit:=");
    scanf("%d",&b);
    if(checkdig(a,b))
    printf("%d is contain digit %d",a,b);
    else
    printf("%d is not contaning digit %d",a,b);
}