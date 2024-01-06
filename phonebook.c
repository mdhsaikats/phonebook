#include <stdio.h>

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
    int i;
    while(i >= 0)
    {
        printf("Which number do you want:\n");
        scanf("%d", &i);

        printf("Number: %s\n", number[i - 1 ]);
        printf("Name: %s\n", name[i - 1]);
    }

    return 0;
}
// Something else
