
#include <stdio.h>
#include <string.h>

union emp{
 char empid[10];
 char name[20];
};
int main()
{
   // printf("Hello World");

    union emp emp1;
    strcpy(emp1.empid,"123");
    printf("%s\n",emp1.empid);
    strcpy(emp1.name,"khush");
   // printf("%d\n",emp1.empid);
    printf("%s",emp1.name);
    return 0;
}
