#include <stdio.h>

int main() {
    int n, key, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter key to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Key found at index %d\n", i);
            return 0; // Exit program when found
        }
    }

    printf("Key not found\n");
    return 0;
}
