#include <stdio.h>

int print_table(int n){
    if (n > 10){
        return 0;
    }
    printf("8 x %d = %d\n", n, n * 8);
    return print_table(n + 1);
}

int main(){
    print_table(1);
    return 0;
}