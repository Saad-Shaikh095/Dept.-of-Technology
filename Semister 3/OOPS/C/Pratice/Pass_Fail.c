#include <stdio.h>

int main(){
    int a;
    printf("Enter your marks: ");
    scanf("%d", &a);

    if(a < 50){
        printf("You are FAIL\n");
    }
    else if(a > 50 && a <= 90){
        printf("You are Pass\n");
    }
    else if (a > 90){
        printf("You got the scholarship\n");
    }
    else{
        printf("Invalid Input\n");
    }
    return 0;
}