// WAP to find duplicate elements in an array

#include <stdio.h>

int main()
{
    int arr[100], n, i, j;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Find duplicates
    printf("Duplicate elements are:\n");

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                printf("%d\n", arr[i]);
                break;
            }
        }
    }

    return 0;
}