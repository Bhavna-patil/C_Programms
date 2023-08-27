#include<stdio.h>
#include<string.h>
struct employee input(void);
//void highsalary(struct employee [],int);
struct employee
{
  int empid;
  char emp_name[20];
  float salary;
};
void highsalary(struct employee b[],int size)
{int i;
   struct employee t;
  for(i=1;i<size-1;i++)
  {
    if(b[0].salary<b[i].salary)
    {
          t=b[0];
          b[0]=b[i];
         b[i]=t;
    }
  }
  printf("%s has highest salary",b[0].emp_name);
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


int main()
{
  struct employee e[10];
  int i;
  for(i=0;i<5;i++)
  e[i]=input();
  highsalary(e,10);
  return 0;
}
