 #include<stdio.h>
 #include<string.h>
 #include<stdlib.h>
struct student input(void);
void display(struct student);
struct student
{
    char name[20];
    int roll_no;
};
struct student input(void)
{
    struct student b;
    printf("Enter student name & roll number");
    fflush(stdin);
    fgets(b.name,20,stdin);
    scanf("%d",&b.roll_no);
    return b;
}
void display(struct student c)
{
    printf("%d           %s",c.roll_no,c.name);
}

int main()
{
    struct student a[10];
    int i;
    for(i=0;i<10;i++)
    a[i]=input();
    printf("Roll no      student name\n");
    for(i=0;i<10;i++)
    display(a[i]);
    return 0;
}