/* WAP to create some nodes and with the help of triversal display the data part */

#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data ;
    struct node *next ;
};

void display(struct node *head);

// Main funciton -
int main()
{
    // Create node -
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;
    struct node *sixth;
    struct node *seventh;

    // Allocate memory in HEAP through DMA;
    head     = (struct node*)malloc(sizeof(struct node));
    second   = (struct node*)malloc(sizeof(struct node));
    third    = (struct node*)malloc(sizeof(struct node));
    fourth   = (struct node*)malloc(sizeof(struct node));
    fifth    = (struct node*)malloc(sizeof(struct node));
    sixth    = (struct node*)malloc(sizeof(struct node));
    seventh  = (struct node*)malloc(sizeof(struct node));
    
    // Enter data inside the node ;
    head->data = 20;
    head->next = second;

    second->data = 40;
    second->next = third;
    
    third->data = 60;
    third->next = fourth; 
    
    fourth->data = 80;
    fourth->next = fifth;
    
    fifth->data = 100;
    fifth->next = sixth;
    
    sixth->data  = 120;
    sixth->next = seventh; 
    
    seventh->data = 140;
    seventh->next = NULL;

    // CALL FUNCTION TO PRINT THE LINKED LIST 
    display(head);

    return 0;
}
void display(struct node *head)
{
    printf("Start -> ");
    while (head != NULL)
    {
        printf("%d -> ",head->data);
        head = head->next;
    }
    printf("END");
    
}