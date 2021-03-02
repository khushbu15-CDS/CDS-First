/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *link;
};
typedef struct node ll;
ll *first=NULL,*temp,*newnode, *prev=NULL;
int data=0,choice=0;
int main()
{
   while(choice != 9)
   {
       menu();
       scanf("%d",&choice);
       switch(choice)
       {
           case 1:
           case 2:
            insertend();
            break;
           case 3:
           case 4:
           case 5:
            deletefirst();
            break;
           case 6: 
            deleteend();
            break;
           case 7: print();
                   break;
           case 8:
           case 9: exit(0);
           default: printf("wrong choice");
       }
   }

    return 0;
}
void menu()
{
    printf("\n Enter your choice \n");
    printf("1.Insert beg \n2.Insert end \n3.Insert after which position \n");
    printf("4.Del First \n5.Delete Node no \n 6. Delete at end \n");
    printf("7.Print \n8.Search \n9.Exit \n");
    return; 
}
void insertend()
{
    if(first==NULL)
    {
        first=(ll *)malloc(sizeof(ll));
        printf("enter data for the node \n");
        scanf("%d",&data);
        first->data=data;
        first->link=NULL;
    }
    //temp=first;
    else
    {
         temp=first;
       while(temp->link != NULL)
       {
           temp=temp->link;
       }
       newnode = (ll*)malloc(sizeof(ll));
       temp->link=newnode;
       printf("enter the data \n");
       scanf("%d",&data);
       newnode->data=data;
       newnode->link=NULL;
    }
}
void deletefirst()
{
    ll *temp1;
    if(first==NULL)
    {
        printf("list is empty");
    }
    else
    {
        temp1=first;
        first=first->link;
        printf("%d deleted data of first node",temp1->data);
        free(temp1);    
    }
}
void deleteend()
{
    if(first == NULL)
    {
        printf("stack underflow\n");
        return;
    }
    else if(first->link==NULL)
    {
        printf("%d deleted data is" ,first->data);
        free(first);
        return;
    }
    else
    {
        prev=NULL;
        temp=first;
        while(temp->link != NULL)
        {
            prev=temp;
            temp=temp->link;
        }
        printf("%d id deleted",temp->data);
        free(temp);
        prev->link=NULL;
    }
    
}
void print()
{
    if(first==NULL)
    {
        printf("list is empty");
    }
    else
    {
        temp=first;
        while(temp != NULL)
        {
            printf("[%d %u]-> \t",temp->data,temp->link);
            temp=temp->link;
        }
    }
    
}