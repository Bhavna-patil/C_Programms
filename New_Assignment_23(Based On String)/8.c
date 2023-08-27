#include<stdio.h>
#include<string.h>
int isSmall(char);
void make_first_character_capital(char *str)
{
    int i=0;
    while(str[i])
    { 
        if(isSmall(str[i]))
        str[i]=str[i]-32;
        while(str[i]!=' '&&str[i])
        i++;
        i++;
    }
}
int isSmall(char a)
{
   if(a>='a'&&a<='z')
   return 1;
   return 0;
}
int main()
{
    char str[100];
    printf("Enter string");
    fgets(str,100,stdin);
    str[strlen(str)-1]=0;
    make_first_character_capital(str);
      printf("%s",str);
    return 0;
}
