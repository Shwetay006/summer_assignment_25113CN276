#include <stdio.h>

struct Book
{
    int id;
    char name[50];
    char author[50];
};

struct Book b[100];
int n = 0;

void addBook()
{
    printf("Enter Book ID: ");
    scanf("%d", &b[n].id);

    printf("Enter Book Name: ");
    scanf(" %[^\n]", b[n].name);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", b[n].author);

    n++;
    printf("Book Added Successfully!\n");
}

void displayBooks()
{
    int i;

    if (n == 0)
    {
        printf("No Books Available!\n");
        return;
    }

    printf("\nBook Details\n");

    for (i = 0; i < n; i++)
    {
        printf("\nBook ID : %d", b[i].id);
        printf("\nBook Name : %s", b[i].name);
        printf("\nAuthor : %s\n", b[i].author);
    }
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n===== LIBRARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addBook();
                break;

            case 2:
                displayBooks();
                break;

            case 3:
                printf("Program Ended.\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }
}