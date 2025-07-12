#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

int main(){
    struct node *head = NULL;
    head = (struct node*)malloc(sizeof(struct node));

    head -> data = 100;
    head -> link = NULL;

    struct node *second = NULL;
    second = (struct node*)malloc(sizeof(struct node));
    second ->data = 200;
    second -> link = NULL;
    head -> link = second;

    struct node *third = NULL;
    third = (struct node*)malloc(sizeof(struct node));
    third -> data = 300;
    third -> link = NULL;
    second -> link = third;

    struct node *current = head;
    while (current != NULL){
        printf("%d\n", current -> data);
        current = current -> link;
    }

    return 0;



}