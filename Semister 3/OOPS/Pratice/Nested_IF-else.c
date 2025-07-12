#include <stdio.h>

int main(){
    int num;

    printf("Enter a number: ");
    scanf("%D", &num);

    if (num >= 0){
        printf("Number is Positive\n");
        if (num % 2 == 0){
            printf("Even");
        }
        else{
            printf("Odd");

        }
    }
    else{
        printf("Number is Negative\n");
        if (num % 2 == 0){
            printf("Even");
        }
        else {
            printf("Odd");
        }
      
    }
    return 0;
}