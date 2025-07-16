#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

int main(){
    struct node *head = NULL, *current = NULL;
    int n, value;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        printf("Enter value for node %d: ", i + 1);
        scanf("%d", &value);

        struct node *Nodes = (struct node*)malloc(sizeof(struct node));
        Nodes -> data = value;
        Nodes -> link = NULL;

        if (head == NULL){
            head = Nodes;
            current = head;
        } else {
            current -> link = Nodes;
            current = Nodes;
        }
    }

    current = head;
    while (current != NULL){
        printf("%d\n %p\n %p\n", current -> data, current, current -> link);
        current = current -> link;
    }

    return 0;
}