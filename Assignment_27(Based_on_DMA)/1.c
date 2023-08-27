#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* input_string()//input variable length string without memory wastage
{
    char *p=NULL,*q=NULL,ch;
    int size=1,i;
    printf("Enter string:=\n");
    p=(char*)malloc(size);
    p[0]='\0';
    while(1)
    {
       ch=getchar();
       if(ch=='\n')
          break;
       q=(char*)malloc(size+1);
       for(i=0;i<size;i++)   
         q[i]=p[i];
       q[i-1]=ch;
       q[i]='\0';
       free(p);
       size++;
       p=(char*)malloc(size);
       strcpy(p,q);
       free(q);
    }
      
   return p;   
}

int main()
{
    char *str=NULL;
    str=input_string();
    printf("%s",str);
    return 0;
}