#include <stdio.h>
struct student{
    int rollno;
    char name[20];
    float marks;
};
int main()
{
    struct student stu,*p;
    p= &stu;
    printf("Enter the details of the student by teacher");
    
    printf("Enter the rollno:");
    scanf("%d",&p->rollno);
    printf("Enter the name:");
    scanf("%s",&p->name);
    printf("Enter the marks:");
    scanf("%f",&p->marks);
    printf("the rollno of first student is %d\n",p->rollno);
    printf("the name of first student is %s\n",p->name);
    printf("the float of first student is %f\n",p->marks);
    return 0;
}