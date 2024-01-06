#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char number[11][100];
    char name[50][100];
    

    printf("How many entries do you want: ");
    scanf("%d", &n);

    while (n > 0) {
        printf("Enter your number: ");
        scanf("%s", number[n - 1]);

        printf("Enter your name: ");
        scanf("%s", name[n - 1]);
        --n;
    }
    printf("Enter contract name to search: ");
    scanf("%s", check);
    char check[100];

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
