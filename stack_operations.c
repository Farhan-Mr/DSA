/* WAP to create stack data structure and perform its PUSH and POP operaion */

#include<stdio.h>
#include<stdlib.h>

// Global Variables 
int size;
int top = -1;
int *stack;

// Functions - PUSH , POP , DISPLAY 
void push(int n);
int pop();
void dispaly();

// Main function -
int main(){

    int n, s;
    printf("\nEnter your stack size : ");
    scanf("%d",&s);

    size = s;
    stack = (int *)malloc(size * sizeof(int)); // Allocate memory for the stack in HEAP


    for(int i=0; i<s; i++)
    {
        printf("\nEnter element to push : ");
        scanf("%d",&n);

        printf("\nElement is pushed at TOP = %d ",i);
        // Call function to PUSH operation perform -
        push(n);
    }
    // Call function to Display -> Stack
    dispaly();

    // Call function to perform POP Operation -
    int delete = pop();
    printf("\n\nDeleted element is %d \n",delete);

    // Call function to dispaly stack after use pop operation -
    printf("\nafter use POP OPERATION \n");
    dispaly();

    return 0;
}

// PUSH Definitions 
void push(int n)
{
    if(top == size-1)
    printf("Stack is Overflow !");

    else
    {
        top ++ ;
        stack[top] = n ;
    }
}

// POP function 
int pop()
{
    int n ;     // used to return deleted element -

    if(top == -1)
    printf("STACK is Underflow !");

    else
    {
        n = stack[top];
        top -- ;
        return n;
    }
}

// DISPLAY function 
void dispaly()
{
            int i;
    i = top;
    if(top == -1)
    {
        printf("Stack is Empty !! ");
    }
    else{
        printf("\nStack is :  ");
        printf("\n TOP <- ");
        while (i != -1)
        {
            printf("%d <-",stack[i--]);
        }
        printf("-|");
    }

}