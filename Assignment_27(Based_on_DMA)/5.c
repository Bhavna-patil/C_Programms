/**5define structure student with name ,roll no and collage name as member.Define another 
  structure as team with two student type variable as member**/
#include<stdio.h>  
#include<string.h>
#include<stdlib.h>
struct Student
{
    char name[20];
    int roll_no;
    char clg_name[50];
};
struct Team
{
   struct Student s1,s2;
}; 

/**6Define a method to dynamically creat a student type variable and initialise with the 
   values received in the argument. return address of student type variable**/
struct Student* new_student(char name[],int roll_no,char clg_name[])   
{
   struct Student *stu=NULL;
   stu=(struct Student*)malloc(sizeof(struct Student));
   strcpy(stu->name,name);
   stu->roll_no=roll_no;
   strcpy(stu->clg_name,clg_name);
   return stu;
}

/**7Define a method to dynamically creat a TEAM type variable and initialise with the 
   values received in the argument. return address of Team type variable**/
struct Team* new_team(struct Student s1,struct Student s2)   
{
  struct Team *t;
  t=(struct Team*)malloc(sizeof(struct Team));
  t->s1=s1;
  t->s2=s2;
  return t;
}

//8write a method to display data of student type and data of team type
void display_student(struct Student s)
{
    printf("%s %d %s\n",s.name,s.roll_no,s.clg_name);
}
void display_team(struct Team t)
{
    printf("\nTeam:=\n");
    display_student(t.s1);
    display_student(t.s2);
}

/**9 Define a method to dynamically creat the array of pointer of type student.Array size is
   received as an argument .Return the address of array.**/
struct Student** Creat_studen_array(int size)
{
   struct Student **s;
   s=(struct Student**)malloc(size*sizeof(struct Student*));
   return s;
}

/**9 Define a method to dynamically creat the array of pointer of type Team.Array size is
   received as an argument .Return the address of array.**/
struct Team** creat_team_array(int size)
{
   struct Team **t;
   t=(struct Team**)malloc(size*sizeof(struct Team*));
   return t;
}

/**Define a driver function to creat 6 student and 3 team.From team by assigning two 
  student in each team.at last displat the list of team with student in them.**/

void driver()  
{
   struct Student s1={"Bhavna",1,"Tesc"};
   struct Student s2={"bhagyashri",2,"Tesc"};
   struct Student s3={"Sneha",3,"Tesc"};
   struct Student s4={"Ankita",4,"Tesc"};
   struct Student s5={"Bhavii",5,"Bimts"};
   struct Student s6={"Swati",6,"Davv"};
   struct Team *t1,*t2,*t3;
   t1=new_team(s1,s2);
   t2=new_team(s4,s5);
   t3=new_team(s3,s6);
   display_team(*t1);
   display_team(*t2);
   display_team(*t3);

}
int main()
{
    driver();
    return 0;
}