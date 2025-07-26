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

    head = malloc(sizeof(struct node));
    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));

    head -> data= 100;
    one -> data = 200;
    two -> data = 300;
    three -> data = 400;

    head -> next = one;
    one -> next = two;
    two -> next = three;
    three -> next = head;

    struct node *current = head;

    do {
        printf("%d\n", current -> data);
        current = current -> next;
    }
    while (current != head);
    printf("\n");

    return 0;
}