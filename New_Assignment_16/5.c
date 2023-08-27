void evennum(int n)
{
    if(n>0)
    {
        evennum(n-1);
        printf("%d ",2*n);
    }
}

int main()
{
    evennum(10);
    return 0;
}