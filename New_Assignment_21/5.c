#include<stdio.h>
char* strupr(char a[])
{
   int i;
   for(i=0;a[i];i++)
   {
     if(a[i]>='a'&&a[i]<='z')
       a[i]=a[i]-32;
   }
    return a;   
}
int main()
{
    char str[20];
    printf("\nEnter a string:=");
    fgets(str,20,stdin);
    str[strlen(str)-1]=0;
    printf("\nstring in upper case:=%s",strupr(str));
    return 0;
}