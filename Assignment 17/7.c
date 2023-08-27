#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    int i,c=0,d=0,s=0,k;
    fgets(a,20,stdin);
    if(strlen(a)<=20)
    k=strlen(a)-1;
    for(i=0;i<k;i++)
    {
       if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
       c++;
       else
       if(a[i]>='0'&&a[i]<='9')
       d++;
       else
       s++;  
    }
    printf("there are %d character \n %d numerous &\n %d special character",c,d,s);
    return 0;
}