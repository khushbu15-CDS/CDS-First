#include<stdio.h>
#include<stdlib.h>
 struct employee{
    char empid[10];
    char empname[100];
     char company[50];
  //  struct employee *link;
};
typedef struct employee emp;

int main()
{
 FILE *fp;
 fp = fopen("employeedb.bin","wb");
 emp e1[10];
 for(int i=0;i<10;i++){
  printf("enter the empid\n");
scanf("%s",&e1[i].empid);

printf("enter the employee name\n");
scanf("%s" ,&e1[i].empname);

printf("enter the em[ployee company\n");
scanf("%s",&e1[i].company);
}
fwrite(&e1,sizeof(e1),10,fp);
printf("done printing");
fclose(fp);
return(0);
}