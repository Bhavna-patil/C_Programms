#include<stdio.h>
void input(void);
struct employee
{
  int empid;
  char emp_name[20];
  float salary;
};
int main()
{
  input();
  return 0;
}

void input(void)
{
  struct employee b;
  printf("Enter employee ID ,employee name & salary");
  scanf("%d",&b.empid);
  fflush(stdin);
  fgets(b.emp_name,20,stdin);
  scanf("%f",&b.salary);
}