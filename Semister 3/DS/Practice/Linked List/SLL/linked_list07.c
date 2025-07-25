#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void insertAtEnd(struct node **head, int value){
    struct node *newNode = (struct node *)malloc(sizeof(struct node));

    newNode -> data = value;
    newNode -> next = NULL;

    if (*head == NULL){
        *head = newNode;
        return;
    }

    struct node *current = *head;
    while (current -> next != NULL){
        current = current -> next;
    }
    current -> next = newNode;

}

int main(){
    struct node *head = NULL;
    struct node *one = NULL;

    one = (struct node *)malloc(sizeof(struct node));
    one -> data = 100;
    one -> next = NULL;

    head = one;

    insertAtEnd(&head, 109);
    insertAtEnd(&head, 105);
    insertAtEnd(&head, 76);

    struct node *current = head;
    while (current != NULL){
        printf("%d -> ", current -> data);
        current = current -> next;
    }

    printf("NULL");
    return 0;
}