/* WAP to create some nodes and, then add a new node between two node */

#include<stdio.h>
#include<stdlib.h>

// create structure for node -

struct node
{
    int data;
    struct node *next;
};

// Function Decleration 
void display_node( struct node *start );                    // Create function to display nodes (LINKED LIST)
struct node *insert_begnnig( struct node *start, int data );// create function which is use to insert new node at begnning -
struct node *insert_between_nodes(struct node *start, int data , int index);

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

     start = insert_between_nodes(start,200,3);

     // Call functiion after insertion 
     printf("\nAfter insertion between two nodes : \n");
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

// Definition of insert between two nodes -
struct node *insert_between_nodes(struct node *start, int data , int index)
{
    struct node *new;
    new = (struct node*)malloc(sizeof(struct node));

    struct node *prev = start;      // use of prev 
    int i = 0;
    while( i != index-1)
    {
        prev = prev->next ;
        i++ ;
    }
    new->data = data ;
    new->next = prev->next ;
    prev->next = new ;

    return start ;
}