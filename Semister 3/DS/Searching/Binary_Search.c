#include <stdio.h>

int main() {
    int n, key, low, high, mid, choice;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements in sorted order:\n");
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    do {
        printf("\nMenu:\n");
        printf("1. Search a key\n");
        printf("2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter key to search: ");
                scanf("%d", &key);

                low = 0;
                high = n - 1;
                int found = 0;

                while (low <= high) {
                    mid = (low + high) / 2;
                    int cmp = (arr[mid] == key) ? 0 : (arr[mid] < key ? -1 : 1);

                    switch (cmp) {
                        case 0:
                            printf("Key found at index %d\n", mid);
                            found = 1;
                            low = high + 1; // force exit from loop
                            break;

                        case -1:
                            low = mid + 1;
                            break;

                        case 1:
                            high = mid - 1;
                            break;
                    }
                }

                if (!found) {
                    printf("Key not found\n");
                }
                break;

            case 2:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 2);

    return 0;
}
