#include <stdio.h>

int main(){
    int mynumbers[4] = {25, 50, 75, 100};
    int *ptr = mynumbers;

    printf("%d\n", *(ptr + 1));

    return 0;
}