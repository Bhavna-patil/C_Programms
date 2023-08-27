int case_insensitive_comparision(char *str1,char *str2)
{
    int i,j,r;
    char a[strlen(str1)+1],b[strlen(str2)+1];
    strcpy(a,str1);
    strcpy(b,str2);
    strupr(a);
    strupr(b);
    r=strcmp(a,b);
    return r;
}