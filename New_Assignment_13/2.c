#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,choice;
    while(1)
    {
    printf("\n1. Addition");
    printf("\n2. Substraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n5. Exit");
    printf("\n\n Enter your choice");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
          printf("Enter two number");
          scanf("%d%d",&a,&b);
          printf("sum of %d & %d is %d",a,b,a+b);
          break;
        case 2:
          printf("Enter two number");
          scanf("%d%d",&a,&b);
          printf("differance of %d & %d is %d",a,b,a-b);
          break;
        case 3:
          printf("Enter two number");
          scanf("%d%d",&a,&b);
          printf("product of %d & %d is %d",a,b,a*b);
          break;
        case 4:
          printf("Enter two number");
          scanf("%d%d",&a,&b);
          printf("Quatiant of %d & %d is %d",a,b,a/b);
          break;
        case 5: exit(0);        
    }}
}