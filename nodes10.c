/* WAP to create a linked list with 10 nodes and also display */

#include<stdio.h>
#include<stdlib.h>

// Create Struct for NODE
   struct node
    {
        int data;
        struct node *next;
    };

// Create Display Function 
void display(struct node *next);

// Main Function -
int main ()
{

    // Decleration of 10 Node -

    struct node *start;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;
    struct node *sixth;
    struct node *seventh;
    struct node *eighth;
    struct node *ninth;
    struct node *end;

        // Allocate memory for node inside the HEAP -
        start    = (struct node*)malloc(sizeof(struct node));
        second   = (struct node*)malloc(sizeof(struct node));
        third    = (struct node*)malloc(sizeof(struct node));
        fourth   = (struct node*)malloc(sizeof(struct node));
        fifth    = (struct node*)malloc(sizeof(struct node));
        sixth    = (struct node*)malloc(sizeof(struct node));
        seventh  = (struct node*)malloc(sizeof(struct node));
        eighth   = (struct node*)malloc(sizeof(struct node));
        ninth   = (struct node*)malloc(sizeof(struct node));
        end      = (struct node*)malloc(sizeof(struct node));

        // Put Value inside the NODES -

        start->data = 76;
        start->next = second;

        second->data = 56;
        second->next = third;

        third->data = 18;
        third->next = fourth; 
        
        fourth->data = 19;
        fourth->next = fifth;

        fifth->data = 88;
        fifth->next = sixth;

        sixth->data = 97;
        sixth->next = seventh;

        seventh->data = 10;
        seventh->next = eighth; 

        eighth->data = 20;
        eighth->next = ninth;

        ninth->data = 44;
        ninth->next = end;

        end->data = 77;
        end->next = NULL;

        // Call function to display this LINKED LIST -

        display(start);
        
    return 0;
}

void display(struct node *start)
{
    if(start->next == NULL)
    {
        printf("NODE is empty !! ");
        return ;
    }

    else
   {
    printf("\nLINKED LIST : \n");

    printf("START ");
    while (start != NULL)
    {
        printf("-> %d ",start->data);
        start = start->next ;
    }
    printf("-> END ");
   }
    
}