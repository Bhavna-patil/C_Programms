#include<stdio.h>
int main()
{
    int a[10],i,sum_even=0,sum_odd=0;
    printf("Enter array elements");
    for(i=0;i<10;i++)
    {
      scanf("%d",&a[i]);
      if(a[i]&1)
      sum_odd+=a[i];
      else
      sum_even+=a[i];
    }
    printf("\nSum of even num stored in array:=%d",sum_even);
    printf("\nSum of odd number stored in array:=%d",sum_odd);
    return 0;
}