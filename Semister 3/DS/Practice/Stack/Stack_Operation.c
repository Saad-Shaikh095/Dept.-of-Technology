#include <stdio.h>
#define MAX 5  // Max size of stack

int stack[MAX];
int top = -1;  // Empty stack

// Function to add item
void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow! Cannot push %d\n", value);
    } else {
        top++;
        stack[top] = value;
        printf("Pushed %d\n", value);
    }
}

// Function to remove item
void pop() {
    if (top == -1) {
        printf("Stack Underflow! Cannot pop\n");
    } else {
        printf("Popped %d\n", stack[top]);
        top--;
    }
}

// Function to see top item
void peek() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Top element is %d\n", stack[top]);
    }
}

// Function to display all stack elements
void display() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements: ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    push(10);
    push(20);
    push(20);
    push(20);
    push(20);
    push(30);
    display();

    peek();

    pop();
    pop();
    pop();
    pop();  // Trying to pop when empty

    display();

    return 0;
}
