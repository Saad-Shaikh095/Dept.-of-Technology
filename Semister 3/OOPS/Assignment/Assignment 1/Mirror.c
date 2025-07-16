#include <stdio.h>

int main(){
    int a = 10;

    for (int i = 1; i <= a; i++){
        for (int j = 1; j <= i; j++){
            printf("%d ", j * 5);
        }

        int s = (a - i) * 6;
        for(int k = 1; k < s; k++){
            printf(" ");
        }
        for (int j = i; j >= 1; j--){
            printf("%d ", j * 5);
        }
        printf("\n");
    

    }
    return 0;
}