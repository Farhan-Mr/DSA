/* WAP to insert a node in the end of link list */

#include<stdio.h>
#include<stdlib.h>

// Struct -
struct node
{
    int data;
    struct node *next;
};


// Declear Functions -
void display( struct node *head);
struct node *insert_end(struct node *head, int data);

// Main function -
int main ()
{
    // Create nodes -
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;
    struct node *sixth;
    struct node *seventh;

    // Allocate memory inside the heap for nodes -
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));
    fifth = (struct node*)malloc(sizeof(struct node));
    sixth = (struct node*)malloc(sizeof(struct node));
    seventh = (struct node*)malloc(sizeof(struct node));

    // Enter data inside the node --

    head->data = 78;
    head->next = second;

    second->data = 56;
    second->next = third;

    third->data = 18;
    third->next = fourth; 

    fourth->data = 22;
    fourth->next = fifth;

    fifth->data = 100;
    fifth->next = sixth;

    sixth->data = 88;
    sixth->next = seventh;

    seventh->data = 4;
    seventh->next = NULL;

    // CALL FUNCTION to diaplay the created nodes of LINKED LIST 

    printf("\nCreated NODES are : \n");
    display(head);

    // CALL FUNCTION to display the LINKED LIST after add a node in the END 
    insert_end(head,10);
   
    printf("\n\nAfter inserat NODE at the END : \n");
    display(head);

    
    
    return 0;
}
// Definition of DIAPLAY FUNCTION -
void display( struct node *head)
{
    printf("Start ");
    while (head != NULL)
    {
        printf("-> %d",head->data);
        head = head->next;
    }
    printf(" -> END ");
}
// Definition of Insert at the END -
struct node *insert_end(struct node *head, int data)
{
    struct node *new = (struct node*)malloc(sizeof(struct node));
    new->data = data;

    struct node *prev = head ;
    while(prev->next != NULL)
    {
        prev = prev->next ;
    }
    prev->next = new;
    new->next = NULL;
    return head;
    
}