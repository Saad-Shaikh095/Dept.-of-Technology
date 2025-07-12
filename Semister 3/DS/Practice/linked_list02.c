#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

int main(){
    struct node *head = malloc (sizeof(struct node));
    head -> data = 100;
    head -> link = NULL;

    struct node *second = malloc(sizeof(struct node));
    second -> data = 200;
    second -> link = NULL;
    head -> link = second;

    struct node *third = malloc(sizeof(struct node));
    third -> data = 300;
    third -> link = NULL;
    second -> link = third;

    while (head != NULL){
        printf("%d\n", head -> data);
        head = head -> link;
        

    }

   

    return 0;
}