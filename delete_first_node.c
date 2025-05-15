/* WAP to create a linked list and delete 1st node */

#include<stdio.h>
#include<stdlib.h>

// Structure 
    struct node{
                    int data;
                    struct node *next;
                };

// Function Decleration -
void display(struct node *head);                              // print the linked lsit 
struct node *delete_at_first( struct node *head);            // delete at 1st 

// Main Function -
int main ()
{
    // Create nodes for linked list 
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;
    struct node *sixth;

    // ALLOCATE memory for linkd list inside the HEAP -
    head    =  (struct node*)malloc(sizeof(struct node));
    second  =  (struct node*)malloc(sizeof(struct node));
    third   =  (struct node*)malloc(sizeof(struct node));
    fourth  =  (struct node*)malloc(sizeof(struct node));
    fifth   =  (struct node*)malloc(sizeof(struct node));
    sixth   =  (struct node*)malloc(sizeof(struct node));

    // Enter data inside the nodes of linked list -

    head->data = 26;
    head->next = second;

    second->data = 44;
    second->next = third;

    third->data = 62;
    third->next = fourth;

    fourth->data = 55;
    fourth->next = fifth;

    fifth->data = 10;
    fifth->next = sixth;

    sixth->data = 75;
    sixth->next = NULL;

    // Call function to display the LINKED LIST
    printf("\nLINKED LIST : "); 
    display(head);

    // CALL function to delete the 1st node -
     head = delete_at_first(head);
      
    // CALL function to print the LINKED LIST after delete the first node -
    printf("\nLINKED LIST after delete 1st node \n");
    display(head);

    return 0;
}

// Function definition of DISPLAY (which is use to print the LINKED LIST)
void display(struct node *head)
{
    printf("\nSTART -> ");
    while (head != NULL)
    {
        printf("%d -> ",head->data);
        head = head->next;
    }
    printf(" END ");
}

//Function definition of DELETE_AT_FIRST (which is used to delete the fisrt node of linked list)
struct node *delete_at_first( struct node *head)
{
    struct node *ptr;
    ptr = head;
    head = head->next;
    free(ptr);

    return (head);
}