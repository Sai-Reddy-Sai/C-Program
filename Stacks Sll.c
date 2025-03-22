#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next; 
} *top = NULL;

void push(int);
void pop();
void display();

int main() {
    int choice, n;
    printf("Stack Using Linked List\n");
    while (1) {
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to push: ");
                scanf("%d", &n);
                push(n);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
}

void push(int n) {
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = n;
    newnode->next = top;  
    top = newnode;

    printf("Node inserted successfully.\n");
}

void pop() {
    if (top == NULL) {
        printf("Stack Underflow\n");
    } else {
        struct node *temp = top;
        printf("Deleted element: %d\n", temp->data);
        top = temp->next;
        free(temp);
    }
}

void display() {
    if (top == NULL) {
        printf("Stack is empty.\n");
    } else {
        struct node *temp = top;
        printf("Stack elements: ");
        while (temp != NULL) {
            printf("%d --> ", temp->data);
            temp = temp->next;
        }
        printf("NULL\n"); 
    }
}

