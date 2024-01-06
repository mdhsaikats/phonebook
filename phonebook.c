#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char number[11][100];
    char name[11][100];

    printf("How many entries do you want: ");
    scanf("%d", &n);

    if (n > 11 || n <= 0) {
        printf("Invalid number of entries. Please enter a number between 1 and 11.\n");
        return 1;
    }

    for (int i = 0; i < n; ++i) {
        printf("Enter your number for entry %d: ", i + 1);
        scanf("%s", number[i]);

        printf("Enter your name for entry %d: ", i + 1);
        scanf("%s", name[i]);
    }

    char check[100];
    printf("Enter contact name to search: ");
    scanf("%s", check);

    int found = 0;
    for (int i = 0; i < n; ++i) {
        if (strcmp(check, name[i]) == 0) {
            printf("Number: %s\n", number[i]);
            printf("Name: %s\n", name[i]);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Entry not found for the given name.\n");
    }

    return 0;
}


//saikat
