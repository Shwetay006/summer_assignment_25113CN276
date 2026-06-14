// WAP to perform Linear Search in C

#include <stdio.h>

int main()
{
    int arr[100], n, i, key, found = 0;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input element to search
    printf("Enter element to search: ");
    scanf("%d", &key);

    // Linear Search
    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            found = 1;
            break;
        }
    }

    // Output
    if(found)
    {
        printf("Element found at position %d", i + 1);
    }
    else
    {
        printf("Element not found");
    }

    return 0;
}