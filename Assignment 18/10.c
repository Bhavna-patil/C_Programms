#include<stdio.h>
#include<string.h>
void rip(char []);
int main()
{
    char a[20];
    fgets(a,20,stdin);
    printf(" in a given string Repeated characters are :=\n");
    rip(a);
    return 0;
}
void rip(char a[])
{
    int i,j,k,check=0;
    for(i=0;i<strlen(a)-1;i++)
    {
        check=0;
        for(j=i+1;j<strlen(a)-1;j++)
        {
            if((a[i]==a[j]))
            {
                k=a[i+1];
                a[i+1]=a[j];
                a[j]=k;
                check=1;
                i++;
            }
        }
        if(check)
        {       
          printf("%c ",a[i]);
        }
    }
}