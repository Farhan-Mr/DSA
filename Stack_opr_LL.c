/* WAP to creat stack data structure and perform its push operation */

#include<stdio.h>
#include<stdlib.h>

// Structure 
struct node
{
    int data;
    struct node *next;
};

// gloabl variablel -
struct node *top = NULL ;

// Function Decleration -
struct node *push(struct node *top, int n);
void display(struct node *top);

// Main Function -
int main()
{
    char ch; 
    int n,choice;
    do
    {
        // MENU for Stack Operation -
        printf("\nMenu for Stack Data Structure -\n\n");
        printf("Press 1 for Push");
        printf("\nPress 2 for Display ");
        printf("\nPress 3 to Terminate or ( EXIT )");

        printf("\nEnter your Choice - ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1 : printf("Enter number to push : ");
                 scanf("%d",&n);
                 top = push(top,n);
                 break;
         
        case 2 : printf("Stack is : \n");
                 display(top);
                 break;

        case 3: exit(0);

        default: printf("Invalid Data !! \n");
                 break;
        }

        printf("\nPress ( y/n ) to continue : ");
        scanf(" %c", &ch);


    } while (ch == 'y' ||  ch == 'Y' );
    
    return 0;
}

// Function definition - 

// PUSH -
struct node *push(struct node *top, int n)
{
    struct node *new = (struct node*)malloc(sizeof(struct node));
    if(new == NULL)
    printf("\nStack is Overflow !!");

    else
    {
        new->data = n;
        new->next = top;
        top = new;
        return top;
    }
}
// Display - 
void display(struct node *top)
{
    struct node *ptr = top;
    if(top == NULL )
    printf("\nStack is Empty !!");

    else{
        printf("TOP <-");
        while (ptr != NULL)
        {
            printf("%d <- ",ptr->data);
            ptr = ptr->next;
        }     
    }
}