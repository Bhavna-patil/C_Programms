#include<stdio.h>
#include<string.h>
int string_length(char a[])
{
    int i;
    for(i=0;a[i];i++);
    return i;
}
char* string_reverse(char a[])
{
    char b[string_length(a)];
    int i,k=string_length(a)-1;
    strcpy(b,a);
    for(i=0;k>=0;i++,k--)
     a[k]=b[i];
    return a;
}
int string_compare(char str1[],char str2[])
{
    int i;
    for(i=0;str1[i]&&str2[i];i++)
    {
        if(str1[i]!=str2[i])
        {
            if(str1[i]>str2[i])
             return -1;
            return 1;
        }
    }
    if(strlen(str1)==strlen(str2))
    return 0;
    if(strlen(str1)<strlen(str2))
     return -1;
    return 1;
}
char* string_uppercase(char str[])
{
    int i;
    for(i=0;i<strlen(str);i++)
     if(str[i]>='a'&&str[i]<='z')
      str[i]=str[i]-32;
    return str;
}
char* string_lowercase(char str[])
{
    int i;
    for(i=0;i<strlen(str);i++)
     if(str[i]>='A'&&str[i]<='Z')
      str[i]=str[i]+32;
    return str;
}
void sort_string(char str[])
{
    int i,j,k,t;
    k=strlen(str);
    for(i=1;i<k;i++)
    {
        for(j=0;j<k-i;j++)
        {
            if(str[j]>str[j+1])
            {
              t=str[j];
              str[j]=str[j+1];
              str[j+1]=t;
            }
        }
    }
}
int if_vowel(char a)
{
    if(a=='A'||a=='a'||a=='E'||a=='e'||a=='I'||a=='i'||a=='O'||a=='o'||a=='U'||a=='u')
     return 1;
    return 0; 
}
int count_vowel(char str[])
{
    int i=0,j=0,count=0;
    char v[]="aeiouAEIOU";
    for(i=0;str[i];i++)
    {
        for(j=0;v[j];j++)
        {
            if(str[i]=v[j])
            {
                count++;
                break;
            }
        }
    }
   return count; 
}
int find_character_between_specified_indices(char str[],char ch,int start_index,int end_index)
{
  int i,length;
  length=strlen(str);
  if(end_index>length)
       end_index=length;
  if(start_index<0)     
       start_index=0;
  for(i=start_index;i<end_index;i++)
      if(str[i]==ch)
          return i;
  return -1;
}
void swap_with_specified_indices(char str[],int a,int b)
{
    char t;
    int l=strlen(str);
     if(a>=0&&b>=0)
       if(a>=l||b>=l)
         printf("Swapping is not possible");
       else  
        {
            t=str[a];
            str[a]=str[b];
            str[b]=t;
        }
}
int Is_alphanumeric(char str[])
{
    int i,k=0,l=0;
    for(i=0;str[i];i++)
    {
       if(str[i]>='A'&&str[i]<='Z'||str[i]>='a'&&str[i]<='z')
         k=1;
       if(str[i]>='0'&&str[i]<='9')
         l=1;
       if(l&k)
       return 1;
    }
    return 0;
}
int main()
{
    char str[20],ch;
    printf("Enter a string:=");
    fgets(str,20,stdin);
    str[strlen(str)-1]=0;
    if(Is_alphanumeric(str))
    printf("Alphanumeric");
    else
    printf("Nooooo");  
    return 0;
}