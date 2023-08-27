int sum(int n)
{
   int s=0;
   if(n>0)
   s=sum(n-1)+n*n;
   return s;
}
