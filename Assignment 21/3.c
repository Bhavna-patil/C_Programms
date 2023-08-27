#include<stdio.h>
#include<string.h>
struct employee input(void);
void display(struct employee);
struct employee
{
  int empid;
  char emp_name[20];
  float salary;
};
int main()
{
  struct employee e;
  e=input();
  display(e);
  return 0;
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
  printf("\n Employee id = %d\n employee name =%s\nsalary=%3f",c.empid,c.emp_name,c.salary);
}