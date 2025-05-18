/* WAP to create a stack using linked list */

#include <stdio.h> 
#include <stdlib.h> 
 
// Define the node structure 
struct node { 
    int data; 
    struct node *next; 
}; 

struct node* top = NULL; 

// Functions 
struct node* push(struct node* top, int n); 
void display(struct node* top); 

int main(){
     int n, poppedValue;
 
     printf("\nEnter number to Push: "); 
            scanf("%d", &n);
            top = push(top, n);

        // CALL display function to display the stack using linked list
        printf("\nStack with LINKED LIST : \n");
        display(top); 
    return 0;                 
}   

// Push function  --
struct node* push(struct node* top, int n)
{ 
struct node* temp = (struct node*)malloc(sizeof(struct node)); 
if (temp == NULL) { 
printf("Memory allocation failed!\n"); 
return top; 
} 
temp->data = n; 
temp->next = top; 
top = temp; 
return top; 
} 

// Display function 
void display(struct node* top) { 
struct node* temp = top; 
    if (top == NULL) { 
        printf("Stack is empty.\n"); 
        return; 
    } 
    printf("\nStack contents (Top to Bottom):\n"); 
    while (temp != NULL) { 
        printf("%d -> ", temp->data); 
        temp = temp->next; 
    } 
    printf("NULL\n"); 
}