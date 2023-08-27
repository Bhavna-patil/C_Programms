#include<stdio.h>
#include<string.h>
void count_frequency_of_each_charecter(char *str)
{
    int f[128]={0},i;
    for(i=0;str[i];i++)
       f[str[i]]++;
    for(i=0;i<128;i++)   
       if(f[i]!=0)
        printf("%c:- %d\n",i,f[i]);
}
int main()
{
    char str[20]="bhavna patil";
    printf("%s\n",str);
    count_frequency_of_each_charecter(str);
    return 0;
}