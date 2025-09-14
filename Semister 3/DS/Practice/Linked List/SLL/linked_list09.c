#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

// Insert at Beginning
void insertAtBeginning(struct node **head, int value) {
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    if (!newNode) {
        printf("Memory allocation failed!\n");
        return;
    }
    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
}

// Delete from Beginning
void deleteFromBeginning(struct node **head) {
    if (*head == NULL) {
        printf("The List is already empty!\n");
        return;
    }
    struct node *temp = *head;
    *head = (*head)->next;
    free(temp);
}

// Display the List
void display(struct node *head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct node *current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    struct node *head = NULL;
    int choice, value;

    while (1) {
        printf("\n--- Singly Linked List Menu ---\n");
        printf("1. Insert at Beginning\n");
        printf("2. Delete from Beginning\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                insertAtBeginning(&head, value);
                break;
            case 2:
                deleteFromBeginning(&head);
                break;
            case 3:
                display(head);
                break;
            case 4:
                printf("Exiting program...\n");
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
