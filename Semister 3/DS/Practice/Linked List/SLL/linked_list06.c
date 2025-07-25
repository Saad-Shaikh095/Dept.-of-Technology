#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void insertAtBegin(struct node **head, int value){
    struct node *newNode = malloc(sizeof(struct node));

    newNode -> data = value;
    newNode -> next = *head;
    *head = newNode;



}

int main (){
    struct node *head = NULL;
    struct node *one = NULL;

    one = (struct node *)malloc(sizeof(struct node));

    one -> data = 105;
    one -> next = NULL;

    head = one;

    insertAtBegin(&head, 100);
    insertAtBegin(&head, 109);
    insertAtBegin(&head, 76);

    

    struct node *current = head;
    while (current != NULL){
        printf("%d -> ", current -> data);
        current = current -> next;
    }
    printf("NULL");
    return 0;
}