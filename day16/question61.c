#include <stdio.h>


int main() {
    int n;

    // Ask user for the intended size n (numbers should be from 1 to n)
    printf("Enter the value of n (array will contain numbers from 1 to n with one missing): ");
    if (scanf("%d", &n) != 1 || n <= 1) {
        printf("Invalid input. n must be an integer greater than 1.\n");
        return 1;
    }

    int size = n - 1; // array will contain n-1 numbers
    int arr[size];

    printf("Enter %d numbers (from 1 to %n with exactly one missing):\n", size, n);

    // Read array elements with validation
    for (int i = 0; i < size; i++) {
        if (scanf("%d", &arr[i]) != 1 || arr[i] < 1 || arr[i] > n) {
            printf("Invalid input. All numbers must be between 1 and %d.\n", n);
            return 1;
        }
    }

    // Compute expected sum of 1 to n: n*(n+1)/2
    long long expected_sum = (long long)n * (n + 1) / 2;

    // Compute actual sum
    long long actual_sum = 0;
    for (int i = 0; i < size; i++) {
        actual_sum += arr[i];
    }

    long long missing_number = expected_sum - actual_sum;

    // Output the result
    printf("The missing number is: %lld\n", missing_number);

    return 0;
}
