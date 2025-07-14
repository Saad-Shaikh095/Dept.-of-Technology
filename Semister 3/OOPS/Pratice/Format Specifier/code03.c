#include <stdio.h>

int main(){
    int myage = 13;
    int *ptr = &myage;

    printf("%d\n", myage);
    printf("%p\n", &myage);
    printf("%p\n", ptr);
    printf("%d\n", *ptr);

    return 0;
}