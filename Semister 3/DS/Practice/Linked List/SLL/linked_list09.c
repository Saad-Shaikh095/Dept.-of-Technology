#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void insertAtBeginning(struct node **head, int value) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode -> data = value;
    newNode -> next = *head;
    *head = newNode;
}

void deleteList(struct node **head) {
    struct node *current = *head;
    struct node *newNode = NULL;
    while(current != NULL) {
        newNode = current -> next;
        free(current);
        current = newNode;

    }
    *head = NULL;
}

int main() {
    struct node *head = NULL;
    insertAtBeginning(&head, 100);
    insertAtBeginning(&head, 200); 
    insertAtBeginning(&head, 300);
    insertAtBeginning(&head, 400);

    deleteList(&head);

    struct node *current = head;
    while (current != NULL) {
        printf("%d -> ", current -> data);
        current = current -> next;
    }
    printf("NULL\n");

}