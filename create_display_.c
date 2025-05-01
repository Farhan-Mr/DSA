/* WAP to create and display linked list */
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};


struct node *start = NULL;

struct node* create(struct node *start);

void display(struct node *start);

// Main Function 

int main() {
    int choice, n;
    char ch;
    do {

        printf("\n**************** Menu for Linked List ******************");

        printf("\n1. Create List");
        printf("\n2. Display List");
        printf("\n3. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1: start = create(start); 
                    break;
            case 2: display(start); 
                    break;
            case 3: exit(0);
            default: printf("Invalid choice\n");
        }

        printf("\nDo you want to continue? (y/n): ");
        ch = getche();
    } while (ch == 'y' || ch == 'Y');
    return 0;
}

struct node* create(struct node *start) {
    struct node *temp, *prev;
    int n;
    while (1) {
        printf("Enter a number (-99 to end): ");
        scanf("%d", &n);
        if (n == -99) break;
        temp = (struct node*)malloc(sizeof(struct node));
        temp->data = n;
        temp->next = NULL;
        if (start == NULL)
            start = temp;
        else {
            prev = start;
            while (prev->next != NULL) prev = prev->next;
            prev->next = temp;
        }
    }
    return start;
}
void display(struct node *start) {
    struct node *temp = start;
    if (start == NULL) {
        printf("List is empty.\n");
        return;
    }
    printf("\nList is:\nstart->");
    while (temp != NULL) {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
