

#include <stdio.h>

int main()
{
   
  int a[100],i,n,sum=0,max,min;
  printf("enter the size of array");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      printf("the element at %d\n", i);
      scanf("%d",&a[i]);
  }
  max=a[0];
  min=a[0];
  for(i=0;i<n;i++)
  {
      if(a[i]>max)
      {
          max=a[i];
      }
      else
      {
          min=a[i];
      }
  }
  
   printf("the max of the array is %d ",max);
   printf("the min of the array is %d",min);
   return 0;
   
}
