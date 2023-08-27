//function to st  ore string
#include<stdio.h>
#include<string.h>
int count_word(char *str)
{
    int i,count=0;
    for(i=0;str[i];i++)
    {
       if(i==0)
        count++;
       if(str[i]==' ')
         count++;
       while(str[i]==' ')
         i++;
    }
    return count;  
}
//1 
int count_vowel(char *p)
{
    int i,count=0;
    for(i=0;*(p+i);i++)
    {
        if(*(p+i)=='a'||*(p+i)=='e'||*(p+i)=='i'||*(p+i)=='o'||*(p+i)=='u'||*(p+i)=='A'||*(p+i)=='E'||*(p+i)=='I'||*(p+i)=='O'||*(p+i)=='U')
        count++;
    }
    return count;
}
//2
void input_string(char (*p)[20],int row)
{
    int i;
    for(i=0;i<row;i++)
    {
     fgets(p[i],20,stdin);
     p[i][(strlen(p[i])-1)]='\0';
    }
}
//3
void sort(char a[][20],int row)
{
    int round,j;
    char temp[20];
    for(round=1;round<row;round++)
    {
       for(j=0;j<row-round;j++)
       {
          if(strcmp(a[j],a[j+1])==1)
          {
            strcpy(temp,a[j]);
            strcpy(a[j],a[j+1]);
            strcpy(a[j+1],temp);
          }
       }
    }
}
//4
void store_word_as_a_string(char p[][15],char *q,int word)
{
   int i,j=0,k=0;
   for(i=0;q[i];i++,k++)
   {
      if(q[i]!=' ')
        p[j][k]=q[i];
     else
       {
         p[j][k]='\0';
         j++;
         k=-1;
       }  
   }
   p[j][k]='\0';
}
//5
void remove_duplicates(char p[][20],int row)
{
    int i;
    sort(p,row);
    for(i=0;i<row;i++)
     if(strcmp(p[i],p[i+1])==0)
     {
       p[i][0]='\0';
     }
}
//6
void store_string_ending_with_s(char *str)
{
    int i,j=0,k=0,word;
    word=count_word(str);
    char p[word][20],q[word][20];
     for(i=0;str[i];i++,k++)
    {
      if(str[i]!=' ')
        p[j][k]=str[i];
     else
       {
         p[j][k]='\0';
         j++;
         k=-1;
       }  
    }
   p[j][k]='\0';
   k=0;
   for(i=0;i<word;i++)
   {
     if(p[i][strlen(p[i])-1]=='s')
     {
        strcpy(q[k],p[i]);
        k++;
     }
   }
   for(i=0;i<k;i++)
      printf("%s ",q[i]);

}
//7
char most_repeating_character(char *str)
{
  int f[128]={0};
  int i,max,k;
  for(i=0;str[i];i++)
     f[str[i]]++;
  max=f[0];
  for(i=1;i<128;i++)
   if(max<f[i])
   {
     max=f[i];
     k=i;
   }
  return k;
}
//8XXXXXXX
int check_anagram(char str[][20])
{
  int i=0,j=0,k=0,f1[128]={0},f2[128]={0};
  if(strlen(str[i])!=strlen(str[i+1]))
  return 0;
  for(k=0;str[i][k];k++)
     f1[str[i][k]]++;
  for(k=0;str[i+1][k];k++)
     f2[str[i+1][k]]++;   
  for(k=0;str[i][k];k++)   
     if(f1[str[i][k]]!=f2[str[i+1][k]])
     return 0;
  return 1;
}
//9
void store_string_starting_with_a(char *str)
{
    int i,j=0,k=0,word;
    word=count_word(str);
    char p[word][20],q[word][20];
     for(i=0;str[i];i++,k++)
    {
      if(str[i]!=' ')
        p[j][k]=str[i];
     else
       {
         p[j][k]='\0';
         j++;
         k=-1;
       }  
    }
   p[j][k]='\0';
   k=0;
   for(i=0;i<word;i++)
   {
     if(p[i][0]=='a')
     {
        strcpy(q[k],p[i]);
        k++;
     }
   }
   for(i=0;i<k;i++)
      printf("%s ",q[i]);

}
//10
void check_gmail(char str[][25],int size)
{
  char g[10]="gmail.com";
  int i,j=0,k;
  for(i=0;i<size;i++)
  {
     for(j=0;str[i][j];j++)
     {
       if(str[i][j]==g[0])
       {
          for(k=0;g[k];k++,j++)
           if(str[i][j]!=g[k])
           break;
       }
     }
     if(k==strlen(g))
      printf("%s has gmail .com",str[i]);
      k=0;
  }

}

int main()
{
    char str[][25]={"Bhavnapatilgmail.com","pnbcjhbjhbjcbdb","shobhagmail"};
    check_gmail(str,3);
     return 0;
}