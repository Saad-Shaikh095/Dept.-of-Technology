#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
    struct node *prev;
};

int main(){
    struct node *head = NULL;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;
    struct node *four = NULL;
    struct node *five = NULL;

    head = malloc(sizeof(struct node));
    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));
    four =malloc(sizeof(struct node));
    five = malloc(sizeof(struct node));

    head -> data = 100;
    one -> data = 200;
    two -> data = 300;
    three -> data = 400;
    four -> data = 500;
    five -> data = 600;

    head -> next = one;
    head -> prev = NULL;

    one -> next = two;
    one -> prev = head;

    two -> next = three;
    two -> prev = one;

    three -> next = four;
    three -> prev = two;

    four -> next = five;
    four -> prev = three;

    five -> next = NULL;
    five -> prev = four;
    
    struct node *current = head;

    while (current != NULL){
        printf("%d\n", current -> data);
        current = current -> next;

    }
    printf("\n");
    return 0;
}