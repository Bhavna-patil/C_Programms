#include<stdio.h>
#include<string.h>
int count_vowels(char[],int);
void sort_str(char a[],int size)
{
    int i,j;
    char t;
    for(i=1;i<size;i++)
    {
        for(j=0;j<size-i;j++)
        {
            if(a[j]>a[j+1])
             {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
             }
        }
    }
}
int if_vowel(char a)
{
    if(a=='A'||a=='a'||a=='E'||a=='e'||a=='I'||a=='i'||a=='O'||a=='o'||a=='U'||a=='u')
     return 1;
    return 0; 
}
int count_vowels(char str[],int size)
{
    int i=0,j=1,count=0;
    sort_str(str,size);
    while(i<size-1)
    {
        if(if_vowel(str[i]))
          count++;
        while(str[i]==str[j])  
           j++;
        i=j;
        j=j+1;
        if(i==size-1&&if_vowel(str[i]))
           count++;
    }
    return count;
}

int main()
{
    char str[20];
    printf("\nEnter a string:=");
    fgets(str,20,stdin);
    str[strlen(str)-1]=0;
    printf("\nThere are %d vowels in Entered string",count_vowels(str,strlen(str)));
    return 0;
}