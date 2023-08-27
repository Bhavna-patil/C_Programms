#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,i,k;
    p=calloc(10,sizeof(int));
    for(i=0;i<10;i++)
    scanf("%d",(p+i));
    for(i=1;i<10;i++)
    {
      if(*p<*(p+i))
      {
        k=*p;
        *(p)=*(p+i);
        *(p+i)=k;
      }
    }
    printf("Maximum value is %d",*p);
    for(i=1;i<10;i++)
    {
      if(*p>*(p+i))
      {
        k=*p;
        *(p)=*(p+i);
        *(p+i)=k;
      }
    }
    printf("minimum value is %d",*p);
    free(p);
    return 0;
}