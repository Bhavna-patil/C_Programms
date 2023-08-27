#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,d;
    char e;
    while(1)
  {
    printf("\na.Check whether a given set of three number are lengths of an isoscelse triangle or not");
    printf("\nb.Check whether a given set of three number are lengths of an right angled triangle or not");
    printf("\nc.Check whether a given set of three number are lengths of an equilateral triangle or not");
    printf("\nd.Exit");
    printf("\n\nEnter an option:=");
    scanf("%c",&e);
    switch(e)
    {
        case 'a':
            {
                 printf("Enter the  sides od a triangle\n");
                 scanf("%d%d%d",&a,&b,&c);
                 if(a<=c+b||b<=a+c||c<=a+b){
                 if(a==b==c)
                 printf("NOt a sides of Isoscelse triangle\n");
                 else
                 if(a==b||b==c||c==a)
                 printf("Isoscelse triangle\n");}
                 break;
            } 
        case 'b':  
            {    
                printf("Enter the sides of triangle\n");
                 scanf("%d%d%d",&a,&b,&c);
                 if(c*c==a*a+b*b||a*a==b*b+c*c||b*b==a*a+c*c)
                 printf("right angle triangle\n");
                 else
                 printf("not a sides of right angle triangle\n");
                 break;
            } 
        case 'c':
            {
               printf("Enter the sides of a triangle\n");
                 scanf("%d%d%d",&a,&b,&c);
                 if(a==b&&c==a)
                 printf("equilateral triangle\n");
                 else
                 printf("not a sides of equilateral triangle\n");
                 break; 
            } 
        case 'd': 
                 exit(0);
        default: 
           printf("invalied choice\n");           
    }
  }  
   return 0;
}