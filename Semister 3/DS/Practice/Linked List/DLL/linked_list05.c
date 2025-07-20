#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
    struct node *prev;
};

void insertAfterNode(struct node* prevNode, int data) {
    if (prevNode == NULL) {
        printf("Previous node cannot be NULL.\n");
        return;
    }

    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;

    newNode->next = prevNode->next;
    newNode->prev = prevNode;

    if (prevNode->next != NULL) {
        prevNode->next->prev = newNode;
    }

    prevNode->next = newNode;
}

int main() {
    struct node *head = NULL;
    struct node *one = NULL;
    struct node *two = NULL;

    // Make head node first
    head = (struct node*)malloc(sizeof(struct node));
    one = (struct node*)malloc(sizeof(struct node));
    two = (struct node*)malloc(sizeof(struct node));

    head->data = 100;
    one->data = 109;
    two->data = 105;

    head->next = one;
    head->prev = NULL;

    one->next = two;
    one->prev = head;

    two->next = NULL;
    two->prev = one;

    // Now insert after head
    insertAfterNode(one, 76);

    struct node *current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }

    printf("NULL\n");

    return 0;
}
