#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
    struct node *prev;
};

void insertAtEnd(struct node** head, int data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        newNode->prev = NULL;
        *head = newNode;
        return;
    }

    struct node* current = *head;
    while (current->next != NULL) {
        current = current->next;
    }

    current->next = newNode;
    newNode->prev = current;
}

void deleteLastNode(struct node **head) {
    if (*head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct node *current = *head;

    // Only one node
    if (current->next == NULL) {
        *head = NULL;
        free(current);
        return;
    }

    // Move to last node
    while (current->next != NULL) {
        current = current->next;
    }

    current->prev->next = NULL;
    free(current);
}

int main() {
    struct node *head = NULL;

    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);
    insertAtEnd(&head, 40);
    insertAtEnd(&head, 50);

    printf("Before deleting last node:\n");
    struct node *current = head;
    while (current != NULL) {
        printf("%d\n", current->data);
        current = current->next;
    }

    deleteLastNode(&head);

    printf("\nAfter deleting last node:\n");
    current = head;
    while (current != NULL) {
        printf("%d\n", current->data);
        current = current->next;
    }

    return 0;
}
