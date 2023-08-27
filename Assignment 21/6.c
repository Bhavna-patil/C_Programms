#include<stdio.h>
#include<string.h>
struct employee input(void);
void display(struct employee);
//void sortbysalary(struct employee[]   ,int);
struct employee
{
  int empid;
  char emp_name[20];
  float salary;
};
void sortbysalary(struct employee b[],int size)
{int i,j;
   struct employee t;
  for(i=0;i<size;i++)
  {
    for(j=i+1;j<size;j++)
     {
       if(strcmp(b[i].emp_name,b[j].emp_name)==1)
       {
           t=b[i];
           b[i]=b[j];
           b[j]=t;
        }
     }
  }
}


struct employee input(void)
{
  struct employee b;
  printf("Enter employee ID ,employee name & salary");
  scanf("%d",&b.empid);
  fflush(stdin);
  fgets(b.emp_name,20,stdin);
  b.emp_name[strlen(b.emp_name)-1]='\0';
  scanf("%f",&b.salary);
  return b;
}
void display(struct employee c)
{
  printf("\n %d , %s , %3f",c.empid,c.emp_name,c.salary);
}

int main()
{
  struct employee e[10];
  int i;
  for(i=0;i<10;i++)
  e[i]=input();
  sortbysalary(e,10);
  for(i=0;i<10;i++)
  display(e[i]);
  return 0;
}
