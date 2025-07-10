#include <stdio.h>

int main(){
    int rows = 10;
    for (int i = 1; i <= rows; i++){
        for (int j = 1; j <= i; j++){
            printf("%d ", j * 5);
        }
        printf("\n");
    }
    return 0;
}