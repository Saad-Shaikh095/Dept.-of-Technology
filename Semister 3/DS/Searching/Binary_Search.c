#include <stdio.h>

int main() {
    int n, key, low, high, mid;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements in sorted order:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter key to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            printf("Key found at index %d\n", mid);
            return 0;
        }
        else if (arr[mid] < key) {
            low = mid + 1; // Search in right half
        }
        else {
            high = mid - 1; // Search in left half
        }
    }

    printf("Key not found\n");
    return 0;
}
