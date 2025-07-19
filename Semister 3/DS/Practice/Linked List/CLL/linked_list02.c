#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    char data[50];
    struct node *next;
};

int main(){
    struct node *head = NULL;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;

    head = malloc(sizeof(struct node));
    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));

    strcpy(head -> data, "Saad");
    strcpy(one -> data, "Sakhare");
    strcpy(two -> data, "Shravani");
    strcpy(three -> data, "Lochana");

    head -> next = one;
    one -> next = two;
    two -> next = three;
    three -> next = head;

    struct node *current = head;

    do {
        printf("%s -> ", current -> data);
        current = current -> next;
    }
    while (current != head);
    printf("%s", head -> data);

    return 0;
}
