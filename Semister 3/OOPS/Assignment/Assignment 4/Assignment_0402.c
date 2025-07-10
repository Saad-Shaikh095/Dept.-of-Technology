#include <stdio.h>

int print_table(int n, int i){
    if (n > 10){
        return 0;
    }
    printf("%d x %d = %d\n", i, n, n * i);
    return print_table(n + 1, i);
}

int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    print_table(1, a);
    return 0;
}