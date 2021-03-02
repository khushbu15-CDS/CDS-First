#include<stdio.h>
int main()
{
        int n, rem,rev=0,originalnum;
        printf("enter a number");
        scanf("%d",&n);
        originalnum=n;
        while(n!=0)
        {
                rem=n%10;
                rev=rev*10+rem;
                n=n/10;
        }
        if(originalnum == rev)
        {
                printf("%d is palindrome ", originalnum);
        }
        else
        {
                printf("%d is not palindrome",originalnum);
        }
 
return 0;
}