#include <stdio.h>
#include <stdlib.h>

// Node structure for circular singly linked list
struct Node {
    int data;
    struct Node *next;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Function to display the circular linked list
void display(struct Node *head) {
    if (head == NULL) return;

    struct Node *temp = head;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);

    printf("(back to head)\n");
}

// Main function
int main() {
    struct Node *head = NULL, *tail = NULL;
    int n, value;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &value);

        struct Node* newNode = createNode(value);

        if (head == NULL) {
            head = tail = newNode;
            tail->next = head; // circular link
        } else {
            tail->next = newNode;
            tail = newNode;
            tail->next = head; // maintain circular link
        }
    }

    printf("\nCircular Linked List: ");
    display(head);

    return 0;
}