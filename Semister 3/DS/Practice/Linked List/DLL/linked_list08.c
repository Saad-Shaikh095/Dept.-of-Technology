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

void deleteNode(struct node** head, int key) {
    struct node* current = *head;

    // Traverse to find key
    while (current != NULL && current->data != key) {
        current = current->next;
    }

    // Not found
    if (current == NULL) {
        printf("Value %d not found.\n", key);
        return;
    }

    // If node to be deleted is head
    if (current == *head) {
        *head = current->next;
    }

    // Change next if not last node
    if (current->next != NULL) {
        current->next->prev = current->prev;
    }

    // Change prev if not first node
    if (current->prev != NULL) {
        current->prev->next = current->next;
    }

    free(current);
}

int main() {
    struct node *head = NULL;

    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);
    insertAtEnd(&head, 40);
    insertAtEnd(&head, 50);

    printf("Before delete node\n");
    struct node *current = head; 
    while (current != NULL) {
        printf("%d\n", current->data);
        current = current->next;
    }

    // ✅ Call with key to delete
    deleteNode(&head, 30);

    printf("After deleting node\n");
    current = head;
    while (current != NULL) {
        printf("%d\n", current->data);
        current = current->next;
    }

    printf("\n");
    return 0;
}
