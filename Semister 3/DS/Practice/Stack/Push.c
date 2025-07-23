#include <stdio.h>
#include <stdlib.h>

#define max 5  // No semicolon!

int stack[max];  // Declare stack array
int top = -1;    // Initialize top

int isfull() {
    if (top == max - 1) {
        return 1;  // Stack is full
    }
    return 0;      // Stack is not full
}

void push(int data) {
    if (!isfull()) {
        top = top + 1;
        stack[top] = data;
        printf("%d\n", data);
    } else {
        printf("Stack is FULL\n");
    }
}

int main() {
    push(10);
    push(100);
    push(289);

    return 0;
}
