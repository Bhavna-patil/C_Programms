#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *p;
    printf("Enter a text");
    p=calloc(20,sizeof(char));
    fgets(p,20,stdin);
    printf("%s",p);
    free(p);
    return 0;
}