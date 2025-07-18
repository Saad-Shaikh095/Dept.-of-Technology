#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
    struct node *prev;
};

int main(){
    struct node *head;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;

/* Allocate memory */
    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));

/* Assign data values */
    one->data = 1;
    two->data = 2;
    three->data = 3;

/* Connect nodes */
    one->next = two;
    one->prev = NULL;

    two->next = three;
    two->prev = one;

    three->next = NULL;
    three->prev = two;

/* Save address of first node in head */
    head = one;
    while (head != NULL){
        printf("%d\n", head -> data);
        head = head -> next;
    }

    return 0;

}