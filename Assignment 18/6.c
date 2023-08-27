#include<stdio.h>
#include<string.h>
void alpha(char []);
int main()
{
    char a[20];
    fgets(a,20,stdin);
    alpha(a);
    return 0;
}

void alpha( char a[])
{
    int i,j;
 for(i=0;i<strlen(a);i++)
    {
        if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
        {
            for(j=i+1;j<strlen(a);j++)
            if(a[j]>='0'&&a[j]<='9')
            break;
            i=strlen(a);
        }
        else
        {
            if(a[i]>='0'&&a[i]<='9')
            {
               for(j=i+1;j<strlen(a);j++)
               if((a[j]>='a'&&a[j]<='z')||(a[j]>='A'&&a[j]<='Z'))
               break; 
               i=strlen(a);
            }
        }
    }
    if(j<strlen(a))
    printf("alphanumeric string");
    else
    printf("not a alphanumeric string");
    }