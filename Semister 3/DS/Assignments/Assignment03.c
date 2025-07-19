#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main (){
    struct node *head = NULL;
    struct node *second = NULL;
    struct node *third = NULL;
    struct node *fourth = NULL;
    struct node *fifth = NULL;

    head = malloc(sizeof(struct node));
    second = malloc(sizeof(struct node));
    third = malloc(sizeof(struct node));
    fourth = malloc(sizeof(struct node));
    fifth = malloc(sizeof(struct node));

    head -> data = 100;
    second -> data = 200;
    third -> data = 300;
    fourth -> data = 400;
    fifth -> data = 500;

    head -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;
    fifth -> next = head;

    struct node *current = head;

    do {
        printf("%d\n", current -> data);
        current = current -> next;

    }
    while (current != head);
        printf("\n");
    

    return 0;

}