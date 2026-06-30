#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int choice, pos, value;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    do
    {
        printf("\n===== ARRAY OPERATION SYSTEM =====\n");
        printf("1. Display Array\n");
        printf("2. Insert Element\n");
        printf("3. Delete Element\n");
        printf("4. Search Element\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Array Elements: ");
                for(i = 0; i < n; i++)
                {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 2:
                printf("Enter position (0 to %d): ", n);
                scanf("%d", &pos);

                if(pos < 0 || pos > n)
                {
                    printf("Invalid Position!\n");
                }
                else
                {
                    printf("Enter value: ");
                    scanf("%d", &value);

                    for(i = n; i > pos; i--)
                    {
                        arr[i] = arr[i - 1];
                    }

                    arr[pos] = value;
                    n++;

                    printf("Element Inserted Successfully!\n");
                }
                break;

            case 3:
                printf("Enter position to delete (0 to %d): ", n - 1);
                scanf("%d", &pos);

                if(pos < 0 || pos >= n)
                {
                    printf("Invalid Position!\n");
                }
                else
                {
                    for(i = pos; i < n - 1; i++)
                    {
                        arr[i] = arr[i + 1];
                    }

                    n--;
                    printf("Element Deleted Successfully!\n");
                }
                break;

            case 4:
                printf("Enter element to search: ");
                scanf("%d", &value);

                for(i = 0; i < n; i++)
                {
                    if(arr[i] == value)
                    {
                        printf("Element found at index %d\n", i);
                        break;
                    }
                }

                if(i == n)
                {
                    printf("Element Not Found!\n");
                }
                break;

            case 5:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}