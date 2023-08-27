
char* reveres_string_word_wise(char *s)
{
    int i,j,k=0,size;
    trim(s);
    size=strlen(s);
    char a[size+1];
    strcpy(a,s);
    for(i=size-1;i>=0;i--)
    {
        if(a[i]==' ')
        {
          for(j=i+1;a[j]!=' '&&j<size;j++,k++) 
           s[k]=a[j];
           s[k]=a[i];
           k++;
        }
        if(i==0)
        {
           for(j=i;a[j]!=' ';j++)
            {
              s[k]=a[j];
              k++;
            }
        }
    }
    return s;
}
//2nd approach
char* reverse_string_word_wise(char *str)
{
    char s[count_word(str)][20];
    int i,j=0,k=0,word=count_word(str);
    for(i=0;str[i];i++,k++)
    {
        if(str[i]!=' ')
          s[j][k]=str[i];
        else
        {
          s[j][k]='\0';
          k=-1;   
          j++;
        }
    }
    str[0]='/0';
    for(i=word-1;i>=0;i--)
    {
      if(str[0]!='/0')
        strcat(str," ");
      strcat(str,s[i]);  
    }
    str[strlen(str)]='\0';
    return str;
}
