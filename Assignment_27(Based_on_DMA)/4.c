/**Write a function to merge two array and store it in dynamically created array,
return the address of dynamically created arry**/
#include<stdio.h>
#include<stdlib.h>

int* merge(int arr1[],int size1,int arr2[],int size2)
{
    int i,j=0,k=0,*arr=NULL;
    arr=(int*)calloc(size1+size2,sizeof(int));
    for(i=0,j=0,k=0;i<size1&&j<size2;k++)
    {
        if(arr1[i]<arr2[j])
        {
           arr[k]=arr1[i];
           i++;
        }
        else
        {
           arr[k]=arr2[j];  
           j++; 
        }
    }
    while(j<size2)
        {
            arr[k]=arr2[j];
            k++;
            j++;
        }
    while(i<size1) 
       {
           arr[k]==arr1[i];
           i++;
           k++;
       }
    return arr;
}
int main()
{
    int a[]={2,4,8,19,20},b[]={20,34,56,78,90,99},i;
    int *q;
    q=merge(a,5,b,6);
    for(i=0;i<11;i++)
    printf("%d ",q[i]);
    return 0;

}