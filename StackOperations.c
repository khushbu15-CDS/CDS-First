/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// stack example without pointers
#include <stdio.h>
int stack[5],top=-1,choice=0,size=5,element;
main ()
{
  
  while(choice != 4)
  {
      menu();
      scanf("%d",&choice);
      switch(choice)
      {
          case 1: 
            if(top ==size-1)
            {
                printf("\n Stack full cannot push");
                break;
            }
                else
                {
                    push();
                }
                break;
          case 2:
            if(top==-1)
            {
                printf("\n Stack is empty cannot delete");
                break;
            }
                else
                {
                    pop();
                    break;
                }
          case 3:print(); break;
          case 4: choice =4; break;
          default: printf("\n wrong choice");
                    break;
          
      }
  }
    return 0;
}

void  menu ()
{
  printf("Enter your choice\n");
  printf ("1.Push \n 2.Pop \n 3. Print \n 4.Exit \n");
  return;

}

void push ()
{
       printf("Enter element to push \n");
       scanf("%d",&element);
       ++top;
       stack[top]=element;
       printf("Pushed %d",element);
       return;
}

void pop ()
{
    printf("popped element is %d ",stack[top]);
    --top;
    return;
}
void print()
{
    
    printf("----Stack is -----");
    for(int i = top;i>=0;i--)
    {
        printf("\n %d \n",stack[i]);
    }

}