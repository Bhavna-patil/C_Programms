#include<stdio.h>
#include<stdlib.h>
void f1(void);
void f1(void)
{
    int *p;
    p=malloc(sizeof(int));
    *p=5;
    printf("%d",*p);
    free(p);
    //now p becomes dangling pointer
}
int main()
{
    f1();
}