/* WAP to create doubly linked list and perform its operation */

#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    struct node *prev;
    int data;
    struct node *next;
}node;

node *start=NULL;
void create_node()
{
    node *temp,*ptr;
    int chc=1;
    while (chc)
    {
        temp=(node *)malloc(sizeof(node));
        temp->next=temp->prev=NULL;
        printf("Enter a value: ");
        scanf("%d",&temp->data);
        if (start==NULL) start=ptr=temp;
        else 
        {
            ptr->next=temp;
            temp->prev=ptr;
            ptr=temp;
        }
        printf("Enter 0 to exit: ");
        scanf("%d",&chc);
    }
}
void display_ll()
{
    node *ptr=start;
    if (ptr==NULL) printf("List is not created!! No elements to show ");
    else 
    {
        printf("start");
        while(ptr!=NULL)
        {
            printf("->%d",ptr->data);
            ptr=ptr->next;
        }
    }
}

void main()
{
    create_node();
    display_ll();
}