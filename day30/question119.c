#include <stdio.h>

int main()
{
    int empId[100], salary[100];
    char name[100][50], department[100][50];
    int n = 0, choice, id, i, found;

    do
    {
        printf("\n===== MINI EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Employee ID: ");
                scanf("%d", &empId[n]);

                printf("Enter Employee Name: ");
                scanf(" %[^\n]", name[n]);

                printf("Enter Department: ");
                scanf(" %[^\n]", department[n]);

                printf("Enter Salary: ");
                scanf("%d", &salary[n]);

                n++;
                printf("Employee Record Added Successfully!\n");
                break;

            case 2:
                if(n == 0)
                {
                    printf("No Employee Records Available!\n");
                }
                else
                {
                    printf("\n----- Employee Records -----\n");
                    for(i = 0; i < n; i++)
                    {
                        printf("\nEmployee ID : %d", empId[i]);
                        printf("\nName        : %s", name[i]);
                        printf("\nDepartment  : %s", department[i]);
                        printf("\nSalary      : %d\n", salary[i]);
                    }
                }
                break;

            case 3:
                printf("Enter Employee ID to Search: ");
                scanf("%d", &id);

                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(empId[i] == id)
                    {
                        printf("\nEmployee Found!\n");
                        printf("Employee ID : %d\n", empId[i]);
                        printf("Name        : %s\n", name[i]);
                        printf("Department  : %s\n", department[i]);
                        printf("Salary      : %d\n", salary[i]);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Employee Not Found!\n");
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