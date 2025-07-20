#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
    struct node *prev;
};

void insertAtBeginning(struct node** head, int data){

    struct node *newNode = (struct node*)malloc(sizeof(struct node));

    newNode -> data = data;
    newNode -> next = *head;
    newNode -> prev = NULL;

    if (*head != NULL){
        (*head) -> prev = newNode;
    }
    *head = newNode;
}

int main(){
    struct node *head = NULL;

    insertAtBeginning(&head, 100);
    insertAtBeginning(&head, 109);
    insertAtBeginning(&head, 105);
    insertAtBeginning(&head, 76);

    struct node *current = head;
    while (current != NULL){
        printf("%d -> ", current -> data);
        current = current -> next;
    }
    printf("NULL");
    return 0;
}