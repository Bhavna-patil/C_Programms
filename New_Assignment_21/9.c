#include<stdio.h>
#include<string.h>
char* string_copy(char a[],char b[])
{
    int i;
    for(i=0;a[i];i++)
      a[i]=b[i];
    return a;  
}
int main()
{
    char str[20],str2[20];
    printf("\nEnter a string:=");
    fgets(str,20,stdin);
    str[strlen(str)-1]=0;
    string_copy(str2,str);
    printf("\nCopied string:=%s",str2);
    return 0;
}