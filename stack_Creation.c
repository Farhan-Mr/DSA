/* WAP to create stack and perform its operation */

#include<stdio.h>
#include<stdlib.h>

// Global variables -
int size;
int top = -1;
int *stk;

// Create function -- 
void push(int n);
void display();

// Main function;
int main(){

    int s,n;   // N is  your pushing element and S is your stack size  <-- (imp note) 
    
    printf("Enter the size of stack : ");
    scanf("%d",&s);

    size = s;
stk = (int *)malloc(size * sizeof(int)); // Allocate memory for the stack


    
    for(int i=0; i<s; i++)
    {
        printf("\nEnter element to push in stack : ");
        scanf("%d",&n);

        // Call function to push element 
        push(n);
        printf("\nElement %d is seccessfully pushed at the top = %d inside the stack",n,i);
    }

    // Call function to display the stack after push the element -
    display();

    return 0;
}

void push(int n)
{
    if( top == size-1 )
    {
        printf("Stack is overflow ! \n");
        return;
    }
    else{
        top ++;
        stk[top] = n;
    }
}

// Function definition of Display (this function is use to display stack element)
void display()
{
        int i;
    i = top;
    if(top == -1)
    {
        printf("Stack is Empty !! ");
    }
    else{
        printf("Stack is :  ");
        printf("\n TOP <- ");
        while (i != -1)
        {
            printf("%d <-",stk[i--]);
        }
        printf("-|");
    }
}