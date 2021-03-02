/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void main()
{
    int a=10;
    int *p;
    p=&a;
    printf("the value of a is %u\n",a);//10
    printf("the address of a is %u\n",&a);//2000
    printf("the value of p is %u\n",p);//2000
    printf("the value of p value is %u\n",*p);//10;
    printf("the address of p is %u\n",&p);//4000
    printf("the value is %u\n",*(&a));//10
    
}