#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20];
    int i;
    fgets(a,20,stdin);
    printf("cpied string\n");
    for(i=0;a[i];i++)
    {
       b[i]=a[i];
      printf("%c",b[i]);
    }
    return 0;
}