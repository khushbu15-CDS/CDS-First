#include<stdio.h>
int main()
{
        int n,sum=0,i;
        printf("enter a number");
        scanf("%d",&n);
        for(i=0;i<=n;i++)
        {
                sum =sum+i;
        }
        printf("the sum is %d\n",sum);
        return 0;
}