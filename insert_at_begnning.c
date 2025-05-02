/* WAP to create some nodes and, then add a new node in the begnning */

#include<stdio.h>
#include<stdlib.h>

// create structure for node -

struct node
{
    int data;
    struct node *next;
};

// Create function to display nodes (LINKED LIST)
void display_node( struct node *start );

// create function which is use to insert new node at begnning -
struct node *insert_begnnig( struct node *start, int data );

// Main Function 
int main()
{
    // create some node -
    struct node *start;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;

    // allocate memory for node inside the heap -
    start   = (struct node*)malloc(sizeof(struct node));
    second  = (struct node*)malloc(sizeof(struct node));
    third   = (struct node*)malloc(sizeof(struct node));
    fourth  = (struct node*)malloc(sizeof(struct node));
    fifth   = (struct node*)malloc(sizeof(struct node));

    // enter data for nodes -

    start->data = 78;
    start->next = second;

    second->data = 56;
    second->next = third;

    third->data = 18;
    third->next = fourth; 

    fourth->data = 22;
    fourth->next = fifth;

    fifth->data = 100;
    fifth->next = NULL;

    // Call fucntion to diaplay nodes-

    printf("\nNODES of LINKED LIST : \n");
    display_node(start);

    // Call function to add new node in the begnning -

    start = insert_begnnig(start,44);

    // Call function to diaplay nodes after insertion -

    printf("\nAfter insertion at begnning : \n");
    display_node(start);

    return 0;
}

// Definition of DISPLAY Function (which is use to display the node) -
void display_node( struct node *start )
{
    printf("START");
    while (start != NULL)
    {
        printf(" -> %d",start->data);
        start = start->next; 
    }
    printf(" -> END\n");
    
}

// Definition of INSERTION Function (which is use to insert new node at the begnning) -
struct node *insert_begnnig( struct node *start, int data )
{
    struct node *new;
    new = (struct node*)malloc(sizeof(struct node));

    new->next = start;
    new->data = data;
    return new;
}