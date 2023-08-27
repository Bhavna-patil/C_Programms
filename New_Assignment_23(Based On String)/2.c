#include<stdio.h>
#include<string.h>
char* trim(char*);
char* trim(char *str)
{
    int i=0,k=0;
    while(str[i]==' ')
     i++;
    for(;str[i];i++,k++)
     str[k]=str[i];
     --i;
    for(;str[i]==' ';i--)
     str[i]=0;
    return str;
}
