#include <stdio.h>

#define SIZE 10  // size of hash table

int hash1(int key) {
    return key % SIZE;   // first hash function
}

int hash2(int key) {
    return 7 - (key % 7);   // second hash function (must be non-zero)
}

int main() {
    int hashTable[SIZE];
    int i, key, index, choice, step;

    // Initialize hash table
    for (i = 0; i < SIZE; i++)
        hashTable[i] = -1;

    while (1) {
        printf("\n--- Double Hashing Menu ---\n");
        printf("1. Insert key\n");
        printf("2. Display table\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter key (number): ");
            scanf("%d", &key);

            index = hash1(key);
            step = hash2(key);  // second hash value

            // Collision handling using double hashing
            while (hashTable[index] != -1) {
                index = (index + step) % SIZE;
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
