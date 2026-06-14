// WAP to find frequency of an element in an array

#include <stdio.h>

int main()
{
    int arr[100], n, i, key, count = 0;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input element to find frequency
    printf("Enter element to find frequency: ");
    scanf("%d", &key);

    // Count frequency
    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            count++;
        }
    }

    // Output
    printf("Frequency of %d = %d", key, count);

    return 0;
}