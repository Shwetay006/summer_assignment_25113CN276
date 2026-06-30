#include <stdio.h>

int main()
{
    int bookId[100], n = 0, choice, id, i, found;
    char bookName[100][50], author[100][50];

    do
    {
        printf("\n===== MINI LIBRARY SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &bookId[n]);

                printf("Enter Book Name: ");
                scanf(" %[^\n]", bookName[n]);

                printf("Enter Author Name: ");
                scanf(" %[^\n]", author[n]);

                n++;
                printf("Book Added Successfully!\n");
                break;

            case 2:
                if(n == 0)
                {
                    printf("No Books Available!\n");
                }
                else
                {
                    printf("\n----- Book List -----\n");
                    for(i = 0; i < n; i++)
                    {
                        printf("\nBook ID     : %d", bookId[i]);
                        printf("\nBook Name   : %s", bookName[i]);
                        printf("\nAuthor Name : %s\n", author[i]);
                    }
                }
                break;

            case 3:
                printf("Enter Book ID to Search: ");
                scanf("%d", &id);

                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(bookId[i] == id)
                    {
                        printf("\nBook Found!\n");
                        printf("Book ID     : %d\n", bookId[i]);
                        printf("Book Name   : %s\n", bookName[i]);
                        printf("Author Name : %s\n", author[i]);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Book Not Found!\n");
                }
                break;

            case 4:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}