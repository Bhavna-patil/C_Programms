#include<stdio.h>
#include<string.h>
int check_occurance(char[],char);
int check_occurance(char b[],char c)
{
    int i,count=0;
    for(i=0;b[i];i++)
    {
        if(b[i]==c)
        count++;
    }
    return count;
}
int main()
{
   char a[20],ch;
   printf("\nEnter a string:=");
   fgets(a,20,stdin);
   a[strlen(a)-1]=0;
   printf("\nEnter character:=");
   scanf("%c",&ch);
   printf("\nOccurance of %c in %s is %d",ch,a,check_occurance(a,ch));
   return 0;
}