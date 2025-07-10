#include <stdio.h>

int main(){
    int marks;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100){
        printf("Enter valid marks between 1 to 100\n");
    }
    else if (marks >= 75){
        printf("Distinction\n");
    }
    else if (marks >= 60){
        printf("First Class");
    }
    else if (marks >= 35){
        printf("Second Class");
    }
    else {
        printf("Fail");
    }
    return 0;
}