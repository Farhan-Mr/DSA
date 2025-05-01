/* WAP to create some node for LINKED LIST */

#include<stdio.h>
#include<stdlib.h>

// Create Structur for node 
struct node
{
    int data;
    struct node *next ; 
};

// Create Function for print the node -
void display( struct node *list );

// Main Function -
int main ()
{
    // There are 5 node for linked list - 

    // Nodes are decleared - ( we have 5 node ) -
    struct node *start;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *end;

    // Allocate memory for node inside the HEAP -
    
    start   = (struct node*)malloc(sizeof(struct node));
    second  = (struct node*)malloc(sizeof(struct node));
    third   = (struct node*)malloc(sizeof(struct node));
    fourth  = (struct node*)malloc(sizeof(struct node));
    end     = (struct node*)malloc(sizeof(struct node));

    // Enter data inside the node 
    start->data = 78;
    start->next = second;

    second->data = 88;
    second->next = third;

    third->data = 44;
    third->next = fourth;

    fourth->data = 56;
    fourth->next = end;

    end->data = 100; 
    end->next = NULL; 

    // Call function to print the Data part of node -  or print LINKED LIST 

    display(start);

    return 0;   
}

// Definition of this function ( Which is used to print the Linked list)
void display(struct node *list)
{
    printf("start ");
    while(list != NULL)
    { 
        printf("-> %d ", list->data);
        list = list->next;
    }
    printf(" -> End ");
}