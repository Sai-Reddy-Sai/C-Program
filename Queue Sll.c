#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
} *front = NULL, *rear = NULL;

void enqueue(int);
void dequeue();
void display();

int main() {
    int ch, n;
    printf("Queue Using Single Linked List\n");

    while (1) {
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter the element to insert: ");
                scanf("%d", &n);
                enqueue(n);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid Choice!\n");
        }
    }
    return 0;
}

void enqueue(int n) {
    struct Node *newnode;
	newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->data = n;
    newnode->next = NULL;

    if (front == NULL) {
        front = rear = newnode;
    } else {
        rear->next = newnode;
        rear = newnode;
    }
    printf("Inserted %d into the queue.\n", n);
}

void dequeue() {
    if (front == NULL) {
        printf("Queue is Empty!\n");
    } else {
        struct Node *ptr = front;
        printf("Deleted: %d\n", ptr->data);
        front = front->next;
        free(ptr);

        if (front == NULL) {
            rear = NULL;
        }
    }
}

void display() {
    if (front == NULL) {
        printf("Queue is Empty!\n");
    } else {
        struct Node *ptr = front;
        printf("Queue elements: ");
        while (ptr != NULL) {
            printf("%d --> ", ptr->data);
            ptr = ptr->next;
        }
        printf("NULL\n");
    }
}

