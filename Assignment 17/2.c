#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    int i,k,c=0;
    printf("Enter a string");
    fgets(a,20,stdin);
    printf("Enter a character");
    scanf("%c",&k);
    for(i=0;a[i];i++)
    {
       if(a[i]==k)
       c++;
    }
        printf("occurance of %c is %d",k,c);
    return 0;
}