#include <stdio.h>
struct employee{
    char empid[10];
    char empname[30];
    char company[50];
};
typedef struct employee ll;
int main()
{
    FILE *fp;
    fp=fopen("employeedb.bin","wb");
    ll n1;
    n1.empid='1';
    n1.empname="khush";
    n1.company="covalense";
    fwrite(&n1,sizeof(n1),1,fp);
    printf("done with writing");
    fclose(fp);
    return 0;
    
}