/* WAP to create stack and perform its push and pop operation */

#include<stdio.h>
#include<stdlib.h>

// structure 
struct node
{
    int data;
    struct node *next;
};

// global variable -
struct node *top = NULL;

// FUNCTIONS PUSH POP DISPLAY -> (User define functions)
void display(struct node *top);
struct node *push(struct node *top, int n);
struct node *pop(struct node *top, int *popped);

// Main Function -
int main()
{
    int n, choice, popped_element;
    char ch;

    do
    {
        printf("\nMENU for Stack data structure (with LINKED LIST)");
        printf("\nPress 1 for PUSH \nPress 2 for POP \nPress 3 for Display \nPress 4 for Terminate (END) \n");

        printf("\nSelect any one : ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1 : printf("Enter number for PUSH : ");
                 scanf("%d",&n);
                 top = push(top,n);
                break;

        case 2 : // Call function to perform popoperation 
                 top = pop(top, &popped_element);
                
                 if (popped_element != -1)
                 printf("Popped Element is %d ",popped_element);
                break;

        case 3 : printf("Stack is : \n\n ");
                 display(top);
                break;

        case 4 : exit(4); 
                break;
        
        default: printf("\nInvalid Number !! OPPSS !! ");
            break;
        }


        printf("\nPress (y/n) fro continue or terminate : ");
        scanf(" %c", &ch);
    } while (ch == 'y' || ch == 'Y');
    
    return 0;
}

// Function Definition --

// POP - 
struct node *pop(struct node* top, int* poppedValue)
{ 
struct node* temp = top; 
if (top == NULL)
{ 
printf("Stack Underflow\n"); 
*poppedValue = -1; 
return top; 
}
else
    {
        *poppedValue = top->data;
        temp = top;
        top = top->next;
        free(temp);
        return top;
    }
}

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