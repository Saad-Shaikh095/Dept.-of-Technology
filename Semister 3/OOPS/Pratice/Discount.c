#include <stdio.h>

int main(){
    int amount;

    printf("Enter you anount: ");
    scanf("%d", &amount);

    if (amount > 1000){
        if (amount > 10000){
            printf("You got 15 percent discount\n");
        }
        else if (amount > 5000){
            printf("You got 10 percent discount\n");
        }
        else {
            printf("You got 2 precent discount");
        }

    }
    else {
        printf("No Discount");
    }
    return 0;
}