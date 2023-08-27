#include<stdio.h>
#include<string.h>
int main()
{
    char s[20],*p;
    int i,v=0,c=0;
    printf("Enter string");
    fgets(s,20,stdin);
    p=s;
    for(i=0;*(p+i);i++)
     {
        if(*(p+i)=='a'||*(p+i)=='e'||*(p+i)=='i'||*(p+i)=='o'||*(p+i)=='u'||*(p+i)=='A'||*(p+i)=='E'||*(p+i)=='I'||*(p+i)=='O'||*(p+i)=='U')
         {v++;}
         else
         {
         if((*(p+i)>='a'&&*(p+i)<='z')||(*(p+i)>='A'&&*(p+i)<='Z'))
         c++;}
     }
     printf("in string %s %d wovel & %d consunent",s,v,c);
  return 0;
}