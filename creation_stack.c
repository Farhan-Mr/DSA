/* WAP to create a stack */

#include<stdio.h>
#include<stdlib.h>

#define size 10

// Global Variable 
int top = -1;
int stk[size];

// Function Decleration -
void push(int n);
void display();

// Main Function -
int main ()
{
    int n,si;

    printf("Enter your stack size form 1 to 10: ");
    scanf("%d",&si);

    if(size >= si)
    {
        for(int i=0; i<si; i++)
    {
         printf("Enter no. to push : ");
        scanf("%d",&n);

        push(n);
    }

                // Call function to display the stack --
    printf("\n Stack is : \n ");
    display();

    }
    else{
        printf("Entered size is INVALID ! ");
    }   
    return 0;
}

void push(int n)
{
        top ++ ;
        stk[top] = n;
}

void display()
{
    int i;
    i = top;
    if(top == -1)
    {
        printf("Stack is Empty !! ");
        return;
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