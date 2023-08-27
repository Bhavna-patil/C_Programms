#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a;
    while(1)
  {
    printf("\n\nenter week number:="); 
    scanf("%d",&a);
    switch(a)
    {
        case 1: printf("Happy Sunday");
                break;
        case 2: printf("Happy Monday");
                break; 
        case 3: printf("Happy Tuesday");
                break; 
        case 4: printf("Happy Wednesday");
                break; 
        case 5: printf("Happy Thursday");
                break; 
        case 6: printf("Happy Friday");
                break; 
        case 7: printf("Happy Saturday");
                break; 
        case 8: exit(0);        
        default: printf("Invalied day number");
    }
   
  } 
    return 0;
}