#include <stdio.h>

int main() {
    char fullName[50], initials[5];

    printf("Enter full name: ");
    fgets(fullName, sizeof(fullName), stdin);

    // Clear the input buffer
    while (getchar() != '\n');

    // Extract and print the initials
    printf("Initials: %c.", fullName[0]);

    for (int i = 0; fullName[i]; i++) {
        if (fullName[i] == ' ') {
            printf("%c ", fullName[i + 1]);
        }
    }

    printf("\n");

    return 0;
}
