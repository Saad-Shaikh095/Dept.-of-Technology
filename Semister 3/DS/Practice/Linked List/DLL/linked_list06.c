#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
    struct node *prev;
};

// Insert at end
void insertAtEnd(struct node** head, int data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        newNode->prev = NULL;
        *head = newNode;
        return;
    }

    struct node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
}

// Delete first node
void deleteFirst(struct node** head) {
    if (*head == NULL) {
        printf("List is empty \n");
        return;
    }

    struct node *current = *head;
    *head = current->next;

    if (*head != NULL) {
        (*head)->prev = NULL;
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

    printf("Before deletion:\n");
    struct node *current = head;
    while (current != NULL) {
        printf("%d\n", current->data);
        current = current->next;
    }

    deleteFirst(&head);

    printf("\nAfter deletion:\n");
    current = head;
    while (current != NULL) {
        printf("%d\n", current->data);
        current = current->next;
    }

    return 0;
}
