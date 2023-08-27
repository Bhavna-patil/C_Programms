#include<stdio.h>
int main()
{
    char a[20];
    int i,k=0;
    fgets(a,20,stdin);
    for(i=0;a[i];i++)
    {
        if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='e'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U')
        {
            k++;
        }
    }
    printf("there are %d vowels in a given string",k);
    return 0;
}