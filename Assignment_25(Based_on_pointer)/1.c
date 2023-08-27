#include<stdio.h>
#include<string.h>
//1
void swap(int *p,int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}
//2
void search_occurance(char *str,char ch,int *arr)
{
    int i,k=0;
    for(i=0;str[i];i++)
    {
        if(str[i]==ch)
        {  
          arr[k]=i;
          k++;
        }
    }
}
//3,4,5
void extract_string(char *str,int start_index,int end_index,char *result)
{
    int i=0,j=0,l;
    l=strlen(str);
    if(start_index<0||end_index>l||end_index<0||start_index>l-2)
            printf("Extraction is not possible");
    else
    {
       for(i=start_index;i<end_index;i++,j++)
          result[j]=str[i];
       result[j]='\0';
    }
}
//6
void swap_string(char *str1,char *str2)
{
    char temp[strlen(str1)+1];
    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);
}
//7
void sort(int *ptr,int size)
{
    int j,round,temp;
    for(round=1;round<size;round++)
    {
        for(j=0;j<size-round;j++)
        {
            if(ptr[j]>ptr[j+1])
            {
               temp=ptr[j];
               ptr[j]=ptr[j+1];
               ptr[j+1]=temp;
            }
        }
    }

}
//8
void merge(int *arr1,int size1,int *arr2,int size2,int *arr3)
{
    int i,k=0;
    for(i=0;i<size1;i++,k++)
        arr3[k]=arr1[i];
    for(i=0;i<size2;i++,k++)    
        arr3[k]=arr2[i];
}
//9
void move_first_element_as_smaller_value_at_left_and_greater_value_at_right(int *ptr,int size)
{
  int i=size-1,j=0,k=0,l;
  while(i!=j)
  {
    if(ptr[j]>ptr[i])
    {
       k=ptr[i];
       for(l=i;l>j;l--)
          ptr[l]=ptr[l-1];
       ptr[l]=k;  
       j++; 
    }
    else
     i--;
  }
}
//10
void input(int **q,int *size,int length)
{
    int i,j;
    for(i=0;i<length;i++)
    {
        printf("\n Enter marks[%d]:=",i);
        for(j=0;j<size[i];j++)
        scanf("%d",*(q+i)+j);
    }
}
void display(int *q,int size)
{
    int i;
        for(i=0;i<size;i++)
        printf("%d ",*(q+i));
}
int find_highest_mark(int **q,int length,int *size)
{
    int i,j,max;
    max=q[0][0];
    printf("\n %d  ",max);
    for(i=0;i<length;i++)
    {
        for(j=0;j<size[i];j++)
        if(max<q[i][j])
        {
            max=q[i][j];
        }
    }
    return max;
}

int main()
{
    int a[5],b[3],c[5],d[6],e[5],size[5]={5,3,5,6,5},*p[5],i;
    p[0]=a;
    p[1]=b;
    p[2]=c;
    p[3]=d;
    p[4]=e;
    input(p,size,5);
    for(i=0;i<5;i++)
    display(p[i],size[i]);
    printf("Highest mark:=%d ",find_highest_mark(p,5,size));
    return 0;
}