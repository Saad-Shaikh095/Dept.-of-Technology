#include <stdio.h>
#include <stdlib.h>
#include <string.h>   

struct node {
    char data[50];
    struct node *next;
    struct node *prev;
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

    strcpy(head->data, "Saad");
    strcpy(one->data, "Sakhare");
    strcpy(two->data, "Lochana");
    strcpy(three->data, "Shravani");

    head->next = one;
    head->prev = NULL;

    one->next = two;
    one->prev = head;

    two->next = three;
    two->prev = one;

    three->next = NULL;
    three->prev = two;

    struct node *current = head;

    while (current != NULL) {
        printf("%s ->", current->data);
        current = current->next;
    }

    return 0;
}
