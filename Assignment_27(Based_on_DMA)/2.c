/**Write a program to ask the user to input a number of data values he would like to enter 
   the creat a dynamically array to accommodate data values.now take the input from user 
   and display the avarage of values**/
#include<stdio.h>   
#include<stdlib.h>
int main()
{
    int i,j,*arr,sum=0;
    printf("Enter the no of values you want to enter:=");
    scanf("%d",&i);
    printf("\nEnter values:=");
    arr=(int*)calloc(i,sizeof(int));
    for(j=0;j<i;j++)
       scanf("%d",arr+j);
    for(j=0;j<i;j++)   
       sum+=arr[j];
    printf("\nAvarage of values is %f",sum*1.0/i);   
    return 0;
}