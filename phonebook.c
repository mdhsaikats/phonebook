#include <stdio.h>
#include <string.h>

int number[100];
char name[100][50];
int currentSize = 0;
int option = 0;

void phonebook_add()
{
    if (currentSize >= 100)
    {
        printf("Array is full\n");
        return;
    }
    int tempNumber;
    char tempName[50];
    printf("Enter your number: ");
    scanf("%d", &tempNumber);

    printf("Enter your name: ");
    scanf("%s", tempName);

    strcpy(name[currentSize], tempName);
    number[currentSize] = tempNumber;

    currentSize++;
}

void phonebook_list()
{
    for (int i = 0; i < currentSize; i++)
    {
        printf("Index: %d \t Name: %s \t Number: %d \n", i, name[i], number[i]);
    }
}
void phonebook_search()
{
    char tempQueryName[50];
    printf("Enter contact name to search: ");
    scanf("%s", tempQueryName);

    int found = 0;
    for (int i = 0; i < currentSize; ++i)
    {
        if (strcmp(tempQueryName, name[i]) == 0)
        {
            printf("Match Found:\n");
            printf("Index: %d \t Name: %s \t Number: %d \n", i, name[i], number[i]);
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("Not Found Any Number For Name :%s\n", tempQueryName);
    }
}

void phonebook_delete()
{
    int tempDeleteIndex;
    printf("Enter index number to delete: ");
    scanf("%d", &tempDeleteIndex);

    if (tempDeleteIndex < 0 || tempDeleteIndex >= currentSize)
    {
        printf("Index out of bounds\n");
        return;
    }

    char oldName[50];
    int oldNumber;
    strcpy(oldName, name[tempDeleteIndex]);
    oldNumber = number[tempDeleteIndex];

    for (int i = tempDeleteIndex; i < currentSize; i++)
    {
        number[i] = number[i + 1];
        strcpy(name[i], name[i + 1]);
    }

    printf("Name: %s, Number: %d. Deleted Successfully\n", oldName, oldNumber);
    currentSize--;
}

int main()
{

    while (option >= 0)
    {
        printf("1.Add 2.Search 3.Delete 4.List -  ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            phonebook_add();
            break;

        case 2:
            phonebook_search();
            break;

        case 3:
            phonebook_delete();
            break;

        case 4:
            phonebook_list();
            break;

        default:
            printf("**Invalid option**\n");
            break;
        }
    }

    return 0;
}


//saikat
