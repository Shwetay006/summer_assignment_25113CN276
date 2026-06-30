#include <stdio.h>

struct Account
{
    int accNo;
    char name[50];
    float balance;
};

int main()
{
    struct Account a[100];
    int n = 0, choice, i, accNo, found;
    float amount;

    do
    {
        printf("\n===== BANK ACCOUNT SYSTEM =====\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Display All Accounts\n");
        printf("5. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Account Number: ");
                scanf("%d", &a[n].accNo);

                printf("Enter Account Holder Name: ");
                scanf(" %[^\n]", a[n].name);

                printf("Enter Initial Balance: ");
                scanf("%f", &a[n].balance);

                n++;
                printf("Account Created Successfully!\n");
                break;

            case 2:
                printf("Enter Account Number: ");
                scanf("%d", &accNo);

                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(a[i].accNo == accNo)
                    {
                        printf("Enter Deposit Amount: ");
                        scanf("%f", &amount);

                        a[i].balance += amount;
                        printf("Deposit Successful!\n");
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Account Not Found!\n");
                break;

            case 3:
                printf("Enter Account Number: ");
                scanf("%d", &accNo);

                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(a[i].accNo == accNo)
                    {
                        printf("Enter Withdraw Amount: ");
                        scanf("%f", &amount);

                        if(amount <= a[i].balance)
                        {
                            a[i].balance -= amount;
                            printf("Withdrawal Successful!\n");
                        }
                        else
                        {
                            printf("Insufficient Balance!\n");
                        }

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Account Not Found!\n");
                break;

            case 4:
                if(n == 0)
                {
                    printf("No Accounts Available!\n");
                }
                else
                {
                    printf("\nAccount Details:\n");
                    for(i = 0; i < n; i++)
                    {
                        printf("\nAccount No : %d", a[i].accNo);
                        printf("\nName       : %s", a[i].name);
                        printf("\nBalance    : %.2f\n", a[i].balance);
                    }
                }
                break;

            case 5:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}