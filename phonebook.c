#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char number[11][100];
    char name[11][100];



    while (1)
    {
        
    

    char option[50];
    printf("1.Add 2.Search 3.Delete -  ");
    scanf("%s", option);


    switch (option[0]) {
        case '1':
            printf("How many entries do you want: ");
            scanf("%d", &n);

            for (int i = 0; i < n; ++i) {
                printf("Enter your number for entry %d: ", i + 1);
                scanf("%s", number[i]);

                printf("Enter your name for entry %d: ", i + 1);
                scanf("%s", name[i]);
            }
            break;

        case '2': 
            printf("Enter contact name to search: ");
            char check[100];
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
            break;

        case '3': 
            // Add code for deleting entries
            break;

        default:
            printf("Invalid option.\n");
            break;
    }

    }

    return 0;
}



//saikat
