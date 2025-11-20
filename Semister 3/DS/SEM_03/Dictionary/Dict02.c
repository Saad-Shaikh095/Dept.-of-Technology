#include <stdio.h>
#include <string.h>

int main() {
    char words[50][50], meanings[50][50];
    int n, i;
    char search[50];
    int found = 0;

    // Insert elements into dictionary
    printf("How many words you want to insert? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter word %d: ", i + 1);
        scanf("%s", words[i]);

        printf("Enter meaning %d: ", i + 1);
        scanf("%s", meanings[i]);
    }

    // Search a word
    printf("\nEnter word to search: ");
    scanf("%s", search);

    for (i = 0; i < n; i++) {
        if (strcmp(words[i], search) == 0) {
            printf("Meaning: %s\n", meanings[i]);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Word not found in dictionary.\n");
    }

    return 0;
}