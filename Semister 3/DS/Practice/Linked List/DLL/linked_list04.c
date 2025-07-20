#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
    struct node *prev;
};

void insertAtEnd(struct node** head, int data){
    struct node* newNode = (struct node*)malloc(sizeof(struct node));

    newNode -> data = data;
    newNode -> next = NULL;

    if (*head == NULL){
        newNode -> prev = NULL;
        *head = newNode;
        return;
    }
    struct node *current = *head;
    while (current -> next != NULL){
        current = current -> next;
    }
    current -> next = newNode;
    newNode -> prev = current;


}

int main(){
    struct node *head = NULL;

    insertAtEnd(&head, 100);
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