#include<stdio.h>
 #include<string.h>
 #include<stdlib.h>
struct student input(void);
void display(struct student);
struct student
{
    int roll_no;
    char name[20];
    int chem_marks,phy_marks,maths_marks;
};
struct student input(void)
{
    struct student b;
    printf("Enter student name & roll number");
    printf("Enter marks physics chemistry maths");
    fflush(stdin);
    fgets(b.name,20,stdin);
    b.name[strlen(b.name)-1]='\0';
    scanf("%d",&b.roll_no);
    scanf("%d%d%d",&b.phy_marks,&b.chem_marks,&b.maths_marks);
    return b;
}
void display(struct student c)
{
    float parcent;
    parcent=(c.phy_marks+c.chem_marks+c.maths_marks)/3;
    printf(" %s  has %.2f %%",c.name,parcent);
}

int main()
{
    int i,n;
    printf("Enter the number of student\n");
    scanf("%d",&n);
    struct student a[n];
    for(i=0;i<n;i++)
    a[i]=input();
    for(i=0;i<n;i++)
    display(a[i]);
    return 0;
}