
#include <stdio.h>

int main()
{
    printf("Hello World\n");
    int a=8;
    int *p;
    p=(int *)malloc(sizeof(int));
    *p=10;
    p=&a;
    printf("%d\n",(*p));
    printf("%p\n",p);

    return 0;
}
