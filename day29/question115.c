#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int choice, i, len;

    do
    {
        printf("\n===== STRING OPERATION MENU =====\n");
        printf("1. Find Length\n");
        printf("2. Copy String\n");
        printf("3. Concatenate Strings\n");
        printf("4. Compare Strings\n");
        printf("5. Reverse String\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter a string: ");
                scanf(" %[^\n]", str1);

                len = 0;
                while(str1[len] != '\0')
                    len++;

                printf("Length = %d\n", len);
                break;

            case 2:
                printf("Enter a string: ");
                scanf(" %[^\n]", str1);

                i = 0;
                while(str1[i] != '\0')
                {
                    str2[i] = str1[i];
                    i++;
                }
                str2[i] = '\0';

                printf("Copied String: %s\n", str2);
                break;

            case 3:
                printf("Enter First String: ");
                scanf(" %[^\n]", str1);

                printf("Enter Second String: ");
                scanf(" %[^\n]", str2);

                i = 0;
                while(str1[i] != '\0')
                    i++;

                int j = 0;
                while(str2[j] != '\0')
                {
                    str1[i] = str2[j];
                    i++;
                    j++;
                }
                str1[i] = '\0';

                printf("Concatenated String: %s\n", str1);
                break;

            case 4:
            {
                printf("Enter First String: ");
                scanf(" %[^\n]", str1);

                printf("Enter Second String: ");
                scanf(" %[^\n]", str2);

                i = 0;
                while(str1[i] == str2[i] && str1[i] != '\0')
                    i++;

                if(str1[i] == str2[i])
                    printf("Strings are Equal\n");
                else
                    printf("Strings are Not Equal\n");

                break;
            }

            case 5:
                printf("Enter a string: ");
                scanf(" %[^\n]", str1);

                len = 0;
                while(str1[len] != '\0')
                    len++;

                printf("Reversed String: ");
                for(i = len - 1; i >= 0; i--)
                    printf("%c", str1[i]);

                printf("\n");
                break;

            case 6:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}