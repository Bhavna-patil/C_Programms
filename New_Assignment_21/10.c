#include<stdio.h>
#include<string.h>
int first_occurance_of_char(char a[],char c)
{
    int i;
    for(i=0;a[i];i++)
     { 
        if(a[i]==c)
        return(i+1); 
     } 
    return 0;
}
int main()
{
    char str[20],ch;
    printf("\nEnter a string:=");
    fgets(str,20,stdin);
    str[strlen(str)-1]=0;
    printf("\nEnter a character:=");
    scanf("%c",&ch);
    printf("\nfirst ocuurance of %c in %s at position %d",ch,str,first_occurance_of_char(str,ch));
    return 0;
}