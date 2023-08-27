#include<stdio.h>
#include<string.h>
char swap(char*,char*);
int main()
{
    char a[10],b[10];
    printf("Enter two string");
    fgets(a,10,stdin);
    fgets(b,10,stdin);
    swap(a,b);
    printf("1st string=%s\n2nd string=%s",a,b);
    return 0;
}

char swap(char *p,char *q)
{
    char k[10];
    strcpy(k,p);
    strcpy(p,q);
    strcpy(q,k);
}