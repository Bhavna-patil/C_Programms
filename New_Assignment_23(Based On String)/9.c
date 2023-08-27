#include<stdio.h>
#include<string.h>
int count_word(char *str)
{
    int i,count=0;
    for(i=0;str[i];i++)
    {
       if(i==0)
        count++;
       if(str[i]==' ')
        count++;
       while(str[i]==' ')
         i++;
    }
    return count;  
}
int isSmall(char a)
{
   if(a>='a'&&a<='z')
   return 1;
   return 0;
}
char* make_ancronym_name(char *str)
{
  int word=count_word(str),i,j=0,k=0;
  char s[word][20];
  for(i=0;str[i];i++,k++)//stored string word wise
  {
    if(str[i]!=' ')
      s[j][k]=str[i];
    else 
    {
      s[j][k]='\0';
      k=-1;
      j++;
    } 
  }
  s[j][k]='\0';
  str[0]='\0';
  for(k=1,i=0;k<word;i++,k++)
  {
    str[i]=s[k-1][0];
    if(Is_small(str[i]))
       str[i]-=32;
    i++;
    str[i]=' ';
  }
  strcpy(str+i,s[word-1]);
  return str;
}
int main()
{
    char str1[30];
    printf("Enter string:=");
    fgets(str1,30,stdin);
    str1[strlen(str1)-1]='\0';
    printf("%s",make_ancronym_name(str1));
    return 0;
}