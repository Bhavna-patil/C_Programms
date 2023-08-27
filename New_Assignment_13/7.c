#include<stdio.h>
#include<stdlib.h>
int main()
{  
   while(1) 
   {
     int ch,a;
     printf("\n1. Factorial of a number");
     printf("\n2. check even and odd");
     printf("\n3. Area of a circle");
     printf("\n4. Sum of firzt n natural number");
     printf("\n5. Exit"); 
     printf("\n\nEnter your ur hoice");
     scanf("%d",&ch);
     switch(ch) 
     {
        case 1:
            printf("Enter anumber");
            scanf("%d",&a);
            int i,fact=1;
            for(i=1;i<=a;i++)
            fact*=i;
            printf("Factorial of %d is %d",a,fact);
            break;
        case 2:
            printf("Enter a number");
            scanf("%d",&a);
            printf(a&1?"Odd number":"Even number");    
            break;
        case 3:
            printf("Enter the radius of a circle");
            scanf("%d",&a);
            printf("Area of circle is %f",3.141*a*a);
            break;    
        case 4:
            printf("Enter number");
            scanf("%d",&a);
            int sum=0;
            for(i=1;i<=a;i++)    
            sum+=i;
            printf("Sum of first %d natural number is %d",a,sum);
            break;
        case 5:
            exit(0);  
            break; 
        default :
            printf("Invalied choice");  
     }           
   }
  return 0; 
}