int count_word(char *str)
{
    int i,count=0;
    trim(str);
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
int main()
{
    char str[]="  Bhavna   patil  bsg  jnbx nkjk  ";
    printf("%d",count_word(str));  
    return 0;
}