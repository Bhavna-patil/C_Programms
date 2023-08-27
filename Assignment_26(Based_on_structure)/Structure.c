#include<stdio.h>
#include<string.h>
#include<math.h>
struct Employee
{
   int id;
   char name[20];
   float salary;
};
struct Employee input()
{
   struct Employee e;
   scanf("%d",&e.id);
   fflush(stdin);
   fgets(e.name,20,stdin);
   e.name[strlen(e.name)-1]='\0';
   scanf("%f",&e.salary);
   return e;
}
void Display(struct Employee e)
{
    printf("\n%d  %s  %f",e.id,e.name,e.salary);
}
struct Employee find_highest_salary_employee(struct Employee *e,int size)
{
    int i=0,max_salary,l;
    max_salary=(e+0)->salary;
    for(i=0;i<size;i++)
    {
        if(max_salary<(e+i)->salary)
        {
          max_salary=(e+i)->salary;
          l=i;
        }
    }
    return e[l];
}
void sort_employee_according_salary(struct Employee *e,int size)
{
    int i,round;
    struct Employee temp;
    for(round=1;round<size;round++)
    {
        for(i=0;i<size-round;i++)
        {
            if((e+i)->salary>(e+i+1)->salary)
            {
               temp=e[i];
               e[i]=e[i+1];
               e[i+1]=temp;
            }
        }
    }
   
}
void sort_employee_according_name(struct Employee *e,int size)
{
    int i,round;
    struct Employee temp;
    for(round=1;round<size;round++)
    {
        for(i=0;i<size-round;i++)
        {
            if(strcmp((e+i)->name,(e+i+1)->name)==1)
            {
               temp=e[i];
               e[i]=e[i+1];
               e[i+1]=temp;
            }
        }
    }
   
}
//7  
struct Time
{
    int hr,min,sec;
};
struct Time time_difference(struct Time t1,struct Time t2)
{
   int sec;
   struct Time temp;
   sec=abs((t1.hr*3600+t1.min*60+t1.sec)-(t2.hr*3600+t2.min*60+t2.sec));
   temp.hr=sec/3600;
   sec=sec%3600;
   temp.min=sec/60;
   temp.sec=sec%60;
   return temp;
}
//8 9
struct Student
{
    int id;
    char name[20];
};
void input(struct Student *s,int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        scanf("%d",&(s+i)->id);
        fflush(stdin);
        fgets((s+i)->name,20,stdin);
        (s+i)->name[strlen((s+i)->name)-1]='\0';
    }
}
void display(struct Student *s,int size)
{
    int i;
    for(i=0;i<size;i++)
    printf("%d  %s\n",(s+i)->id,(s+i)->name);
}
//10
struct Marks
{
    struct Student stu;
    int chem_mark;
    int maths_mark;
    int phy_mark;
};
struct Marks input_marks(struct Student s)
{
   struct Marks temp;
   temp.stu=s;
   scanf("%d%d%d",&temp.chem_mark,&temp.maths_mark,&temp.phy_mark);
   return temp;
}
void calculate_percentage(struct Marks m)
{
    float p;
    p=(m.chem_mark+m.maths_mark+m.phy_mark)/3.0;
    printf("\n %d %s %f%%",m.stu.id,m.stu.name,p);
}
int main()
{
    struct Student s[10];
    struct Marks m[5];
    int i;
    printf("Enter student information:=");
    input(s,10);
    display(s,10);
    for(i=0;i<5;i++) 
    {
        printf("Enter marks of student:=\n");
        m[i]=input_marks(s[i]);
    }
    for(i=0;i<5;i++)
    calculate_percentage(m[i]);
    return 0;
}