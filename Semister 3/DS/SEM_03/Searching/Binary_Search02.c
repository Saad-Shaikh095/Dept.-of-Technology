#include <stdio.h>

int main() {
    int arr[100], n, i, key;
    int low, high, mid;
    int found = 0;

    // Step 1: Input number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Step 2: Input sorted array elements
    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: Input element to search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Step 4: Initialize search boundaries
    low = 0;
    high = n - 1;

    // Step 5: Perform Binary Search
    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            printf("Element %d found at position %d.\n", key, mid + 1);
            found = 1;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    // Step 6: If element not found
    if (!found) {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}