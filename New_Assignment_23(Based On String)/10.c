#include<stdio.h>
#include<string.h>
char* concatenate(char s1[],char s2[])
{
    int i,j;
    i=strlen(s1);
    for(j=0;s2[j];j++)
        s1[i+j]=s2[j];
    s1[i+j]='\0';
    return s1;    
}

int main()
{
    char str[]="Bhavna";
    printf("%s",concatenate(str," Patil"));
    return 0;
}