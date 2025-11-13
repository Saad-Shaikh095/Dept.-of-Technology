#include <stdio.h>

#define SIZE 10  // size of hash table

int hash(int key) {
    return key % SIZE;  // simple hash function
}

int main() {
    int hashTable[SIZE];
    int i, key, index, choice;

    // initialize all table elements to -1 (empty)
    for (i = 0; i < SIZE; i++)
        hashTable[i] = -1;

    while (1) {
        printf("\n--- Hash Table Menu ---\n");
        printf("1. Insert key\n");
        printf("2. Display table\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter key (number): ");
            scanf("%d", &key);

            index = hash(key);

            // linear probing if collision occurs
            while (hashTable[index] != -1) {
                index = (index + 1) % SIZE;
            }

            hashTable[index] = key;
            printf("Key inserted successfully!\n");
        }

        else if (choice == 2) {
            printf("\n--- Hash Table Contents ---\n");
            for (i = 0; i < SIZE; i++) {
                printf("Index %d : %d\n", i, hashTable[i]);
            }
        }

        else if (choice == 3) {
            printf("Exiting program...\n");
            break;
        }

        else {
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
