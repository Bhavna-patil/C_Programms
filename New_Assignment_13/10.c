#include<stdio.h>
#include<stdlib.h>
int main()
{
  while(1)  
  {
    int ch=0,a=0,b=0,i=0;
    printf("\n1. Calculate LCM of two number");
    printf("\n2. Calculate sum of digits if a number");
    printf("\n3. Calculate volumn of a cuboid");
    printf("\n4. Check whether a given number is prime or not");
    printf("\n5. Exit");
    printf("\nEnter your choice\n");
    scanf("%d",&ch);
   switch(ch) 
   {
    case 1:
        printf("Enter two number");
        scanf("%d%d",&a,&b);
        for(i=a>b?b:a;i<=a*b;i++)
        {
            if(i%a==0&&i%b==0)
            break;
        }
        printf("\nLcm is %d",i);
        break;
    case 2:
       printf("Enter a number");
       scanf("%d",&a); 
       while(a)   
       {
         b+=a%10;
         a=a/10;
       }
       printf("Sum of Digit is %d",b);
       break;
    case 3:
       printf("Enter length brigth and hight of a cuboid");
       scanf("%d%d%d",&a,&b,&i);   
       printf("Volumn of cuboid is %d",a*b*i);
       break;
    case 4:
       printf("Enter a number");
       scanf("%d",&a);
       for(i=2;i<=a/2;i++)    
        if(a%i==0)
          break;
        i==a/2+1?printf("Prime number"):printf("Not a prime number");
        break;
    case 5: exit(0);      
   }
  }
  return 0;
}