#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float basic, hra, da, gross;
};

int main()
{
    struct Employee emp[100];
    int n = 0, choice, id, i, found;

    while (1)
    {
        printf("\n===== SALARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee Salary\n");
        printf("2. Display Salary Records\n");
        printf("3. Search Employee Salary\n");
        printf("4. Update Salary\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter Employee ID: ");
            scanf("%d", &emp[n].id);

            printf("Enter Employee Name: ");
            scanf(" %[^\n]", emp[n].name);

            printf("Enter Basic Salary: ");
            scanf("%f", &emp[n].basic);

            printf("Enter HRA: ");
            scanf("%f", &emp[n].hra);

            printf("Enter DA: ");
            scanf("%f", &emp[n].da);

            emp[n].gross = emp[n].basic + emp[n].hra + emp[n].da;

            n++;
            printf("Salary record added successfully!\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("\nNo salary records found.\n");
            }
            else
            {
                printf("\nSalary Records\n");
                printf("-------------------------------------------------------------\n");
                printf("ID\tName\tBasic\tHRA\tDA\tGross\n");
                printf("-------------------------------------------------------------\n");

                for (i = 0; i < n; i++)
                {
                    printf("%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\n",
                           emp[i].id,
                           emp[i].name,
                           emp[i].basic,
                           emp[i].hra,
                           emp[i].da,
                           emp[i].gross);
                }
            }
            break;

        case 3:
            printf("\nEnter Employee ID to Search: ");
            scanf("%d", &id);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (emp[i].id == id)
                {
                    printf("\nEmployee Found\n");
                    printf("ID           : %d\n", emp[i].id);
                    printf("Name         : %s\n", emp[i].name);
                    printf("Basic Salary : %.2f\n", emp[i].basic);
                    printf("HRA          : %.2f\n", emp[i].hra);
                    printf("DA           : %.2f\n", emp[i].da);
                    printf("Gross Salary : %.2f\n", emp[i].gross);

                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Employee not found.\n");

            break;

        case 4:
            printf("\nEnter Employee ID to Update Salary: ");
            scanf("%d", &id);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (emp[i].id == id)
                {
                    printf("Enter New Basic Salary: ");
                    scanf("%f", &emp[i].basic);

                    printf("Enter New HRA: ");
                    scanf("%f", &emp[i].hra);

                    printf("Enter New DA: ");
                    scanf("%f", &emp[i].da);

                    emp[i].gross = emp[i].basic + emp[i].hra + emp[i].da;

                    printf("Salary updated successfully!\n");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Employee not found.\n");

            break;

        case 5:
            printf("Exiting program...\n");
            return 0;

        default:
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}