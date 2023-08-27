#include<stdio.h>
int main()
{
    char ch,i=0;
    printf("Enter character");
    scanf("%c",&ch);
    if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
    {
      if(ch=='a'||ch=='A'||ch=='E'||ch=='e'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
       i=1;
      else 
        i=2;
    }
    switch(i)
    {
        case 1:
           printf("vowel");
           break;
        case 2:
           printf("Consunant");
           break;
        default:
           printf("Other special character");
    }
    return 0;
}