#include<stdio.h>
int main()
{
int a=10,b=20;
printf("The numbers are %d %d ",a,b);
int temp;
temp=a;
a=b;
b=temp;
printf("the numbers after swap are %d %d",a,b);
return 0;
}
 