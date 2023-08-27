//9. Write a function to reverse a string word wise. (For example if the given string is
//“Mysirg Education Services” then the resulting string should be “Services Education
//Mysirg” )
#include<stdio.h>
#include<string.h>
void rev(char []);
int main()
{
   char a[100];
   fgets(a,100,stdin);
   rev(a);
   return 0;
}
void rev(char a[])
{
     int i,j ,length;
     length=strlen(a)-1;
     for(i=length;i>=0;i--)
     {
         if(a[i]==32)
         {
             for(j=i+1;a[j]!=32&&j<length;j++)
             {
                 printf("%c",a[j]);
             }
             printf(" ");
         }
     }
     for(i=0;a[i]!=32&&i<length;i++)
     printf("%c",a[i]);
}