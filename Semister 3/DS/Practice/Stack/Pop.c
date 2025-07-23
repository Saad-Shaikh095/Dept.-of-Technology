#include <stdio.h>
#include <stdlib.h>

#define max 5

int stack[max];
int top = -1;  // Correct initial value

int isempty() {
    if (top == -1) {
        return 1;  // True, stack is empty
    }
    return 0;      // False, not empty
}

int pop() {
    if (!isempty()) {
        int data = stack[top];
        top = top - 1;
        return data;
    } else {
        printf("Stack is Empty\n");
        return -1;  // Return a sentinel value
    }
}

// For testing, you need push too:
void push(int data) {
    if (top == max - 1) {
        printf("Stack is FULL\n");
    } else {
        top++;
        stack[top] = data;
        printf("Pushed: %d\n", data);
    }
}

int main() {
    push(10);
    push(20);
    push(30);

    printf("Popped: %d\n", pop());
    printf("Popped: %d\n", pop());
    printf("Popped: %d\n", pop());
    printf("Popped: %d\n", pop());  // Will show empty message

    return 0;
}
