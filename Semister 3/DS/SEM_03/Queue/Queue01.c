#include <stdio.h>
#include <stdlib.h>

#define MAX 50

int queue[MAX];
int front = -1, rear = -1;

// Function to insert an element into the queue
void insert() {
    int value;
    if (rear == MAX - 1) {
        printf("Queue Overflow\n");
        return;
    }

    printf("Enter element to insert: ");
    scanf("%d", &value);

    if (front == -1) front = 0;
    rear++;
    queue[rear] = value;
    printf("Inserted %d\n", value);
}

// Function to delete an element from the queue
void delete() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow\n");
        return;
    }

    printf("Deleted element: %d\n", queue[front]);
    front++;
}

// Function to display the queue
void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

// Main menu-driven function
int main() {
    int choice;

    while (1) {
        printf("\nQueue Operations:\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: insert(); break;
            case 2: delete(); break;
            case 3: display(); break;
            case 4: exit(0);
            default: printf("Invalid choice\n");
        }
    }

    return 0;
}