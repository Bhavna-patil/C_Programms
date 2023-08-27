#include<stdio.h>
#include<string.h>
int count_spaces(char[]);
int count_spaces(char str[])
{
    int i,spaces=0;
    for(i=0;str[i];i++)
     if(str[i]==' ')
       spaces++;
    return spaces;
}
int main()
{
    char str[20];
    printf("\nEnter a string:=");
    fgets(str,20,stdin);
    str[strlen(str)-1]=0;
    printf("\nThere are %d space in Entered string",count_spaces(str));
    return 0;
}