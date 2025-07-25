#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void insertAfterNode(struct node *prevnode, int value){

    if (prevnode == NULL){
        printf("Previous node cannot be NULL\n");
        return;
    }

    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode -> data = value;
    newNode -> next = prevnode -> next;
    prevnode -> next = newNode;


}

int main(){
    struct node *head = NULL;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;

    one = (struct node *)malloc(sizeof(struct node));
    two = (struct node *)malloc(sizeof(struct node));
    three = (struct node *)malloc(sizeof(struct node));


    one -> data = 700;
    one -> next = two;

    two -> data = 2983;
    two -> next = three;

    three -> data = 1234;
    three -> next = NULL;

    head = one;

    insertAfterNode(two, 100);

    struct node *current = head;
    while (current != NULL){
        printf("%d -> ", current -> data);
        current = current -> next;
    }
    printf("NULL");
    return 0;
}