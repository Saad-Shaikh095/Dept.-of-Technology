#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head = NULL;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;

    head = (struct node *)malloc(sizeof(struct node));
    one = (struct node *)malloc(sizeof(struct node));
    two = (struct node *)malloc(sizeof(struct node));
    three = (struct node *)malloc(sizeof(struct node));

    head -> data = 100;
    one -> data = 76;
    two -> data = 0;
    three -> data = 0;

    head -> next = one;
    one -> next = two;
    two -> next = three;
    three -> next = NULL;

    struct node *current = head;
    while(current != NULL) {
        printf("%d -> ", current -> data);
        current = current -> next;
    }

    printf("NULL\n");
    return 0;

}