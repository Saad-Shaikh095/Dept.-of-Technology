#include <stdio.h>
#include <stdlib.h>

#define size 5

int stack [size];
int top = -1;

void push (int value){
    if (top == size - 1){
        printf("Stack overflow! Cannot push %d\n", value);
    }
    else {
        top++;
        stack[top] = value;
        printf("%d pushed to stack\n",value);
    }
}

void pop (){
    if (top == -1){
        printf("Stack Underflow, Nothing to pop! \n");
    }
    else{
        printf("%d popped from stack", stack[top]);
        top--;
    }
}

void display() {
    if (top == -1){
        printf("Stack is empty\n");
    }
    else{
        printf("Stack elements are\n");
        for(int i = top; i >= 0; i--){
            printf("%d\n", stack[i]);
        }
    }
}

int main(){
    int choice, value;

    while (1) {
        printf("\n***** STACK MENU *****\n");
        printf("1. PUSH\n");
        printf("2. POP\n");
        printf("3. DISPLAY\n");
        printf("4. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice! Please choose again.\n");
        }
    }

    return 0;

}