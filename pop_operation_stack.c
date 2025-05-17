/* WAP to create a stack and use pop operation */

#include<stdio.h>
#include<stdlib.h>

#define size 10

// Global Variable 
int top = -1;
int stk[size];

// Function Decleration -
void push(int n);
int pop();
void display();

// Main Function -
int main ()
{
    int n,si;

    printf("Enter your stack size : ");
    scanf("%d",&si);

    if(size >= si)
    {
    for(int i=0; i<si; i++)
    {
         printf("Enter no. to push : ");
        scanf("%d",&n);

        push(n);
    } 
    } 

    // Call function to display the stack --
    printf("\n Stack is : \n ");
    display();
    

    // call function to delete an element from the stack 
    pop();

    // Call function to display the stack --
    printf("\n\nStack, after use pop operation : ");

    display();

    
    return 0;
}
void push(int n)
{   
    if(top == size-1)
    {
        printf("\n\nStack is Overflow\n");
    }
    else{
        top ++ ;
        stk[top] = n;
    }
}

void display()
{
    int i;
    i = top;
    if(top == -1)
    {
        printf("Stack is Empty !! ");
    }
    else{

        printf("\n TOP <- ");
        while (i != -1)
        {
            printf("%d <-",stk[i--]);
        }
        printf("-|");
    }
}

// Definition of pop function -
int pop()
{
     int n;
     if(top==-1)
     {
       printf("\n Stack is Underflow");
       return(-1);
     }

     else{
     n=stk[top];
     top--;
    }
     return(n);
}