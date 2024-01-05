#include <stdio.h>

int main() {
    int n;
    char number[11][100];
    char array[50][100];

    printf("How many entries do you want: ");
    scanf("%d", &n);

    while (n > 0) {
        printf("Enter your number: ");
        scanf("%s", number[n]);

        printf("Enter your name: ");
        scanf("%s", array[n]);
        --n;
    }

    int i;

    printf("Which number do you want:\n");
    scanf("%d",i);
    if(i = 0){
            i == n;
     printf("Number: %s\n", number[n]);
     printf("Name: %s\n", array[n]);
    }else
    {
        printf("Error!");

    }
    return 0;
}