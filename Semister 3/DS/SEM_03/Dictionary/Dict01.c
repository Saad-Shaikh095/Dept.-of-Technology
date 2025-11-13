#include <stdio.h>
#include <string.h>

struct Dictionary {
    char word[20];
    char meaning[50];
};

int main() {
    struct Dictionary dict[50];
    int n = 0, i, choice;
    char searchWord[20];

    while (1) {
        printf("\n--- Dictionary Menu ---\n");
        printf("1. Insert a word\n");
        printf("2. Search a word\n");
        printf("3. Display all words\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter word: ");
            scanf("%s", dict[n].word);
            printf("Enter meaning: ");
            scanf(" %[^\n]", dict[n].meaning);  // take full line as meaning
            n++;
            printf("Word added successfully!\n");
        }
        else if (choice == 2) {
            printf("Enter word to search: ");
            scanf("%s", searchWord);
            int found = 0;
            for (i = 0; i < n; i++) {
                if (strcmp(dict[i].word, searchWord) == 0) {
                    printf("Meaning: %s\n", dict[i].meaning);
                    found = 1;
                    break;
                }
            }
            if (!found)
                printf("Word not found!\n");
        }
        else if (choice == 3) {
            printf("\n--- Dictionary Contents ---\n");
            for (i = 0; i < n; i++) {
                printf("%d. %s : %s\n", i + 1, dict[i].word, dict[i].meaning);
            }
        }
        else if (choice == 4) {
            printf("Exiting program...\n");
            break;
        }
        else {
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
