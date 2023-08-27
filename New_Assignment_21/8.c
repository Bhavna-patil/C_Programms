#include<stdio.h>
#include<string.h>
void count_alpha_digit_s_char(char str[])
{
    int i,a=0,d=0,c=0;
    for(i=0;str[i];i++)
    {
       if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
        a++;
       else if(str[i]>='0'&&str[i]<='9') 
        d++;
       else 
        c++; 
    }
    printf("\nThere are %d alphabate, %d digit,%d special_character",a,d,c);
}

int main()
{
    char str[20];
    printf("\nEnter a string:=");
    fgets(str,20,stdin);
    str[strlen(str)-1]=0;
    count_alpha_digit_s_char(str);
    return 0;
}