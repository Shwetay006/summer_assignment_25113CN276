#include <stdio.h>

int main()
{
    int roll[100], marks[100];
    char name[100][50];
    int n, i, choice, r, found;

    printf("Enter Number of Students: ");
    scanf("%d", &n);

    do
    {
        printf("\n===== STUDENT RECORD SYSTEM =====\n");
        printf("1. Add Student Records\n");
        printf("2. Display Student Records\n");
        printf("3. Search Student by Roll Number\n");
        printf("4. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                for(i = 0; i < n; i++)
                {
                    printf("\nStudent %d\n", i + 1);

                    printf("Enter Roll Number: ");
                    scanf("%d", &roll[i]);

                    printf("Enter Name: ");
                    scanf(" %[^\n]", name[i]);

                    printf("Enter Marks: ");
                    scanf("%d", &marks[i]);
                }
                printf("Records Added Successfully!\n");
                break;

            case 2:
                printf("\n----- Student Records -----\n");
                for(i = 0; i < n; i++)
                {
                    printf("\nRoll No : %d", roll[i]);
                    printf("\nName    : %s", name[i]);
                    printf("\nMarks   : %d\n", marks[i]);
                }
                break;

            case 3:
                printf("Enter Roll Number to Search: ");
                scanf("%d", &r);

                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(roll[i] == r)
                    {
                        printf("\nStudent Found!\n");
                        printf("Roll No : %d\n", roll[i]);
                        printf("Name    : %s\n", name[i]);
                        printf("Marks   : %d\n", marks[i]);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Student Record Not Found!\n");

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