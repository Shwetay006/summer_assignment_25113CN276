#include <stdio.h>


int findMaxFrequencyElement(int arr[], int n) {
    int maxFreq = 0;
    int maxElem = arr[0];

    for (int i = 0; i < n; i++) {
        int freq = 1;

        
        for (int j = i + 1; j < n; j++) {
            if (arr[j] == arr[i]) {
                freq++;
            }
        }

        
        if (freq > maxFreq) {
            maxFreq = freq;
            maxElem = arr[i];
        }
    }

    return maxElem;
}

int main() {
    int n;

    printf("Enter number of elements: ");

    // Validate array size
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size. Enter a positive integer.\n");
        return 1;
    }

    int arr[n];

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input. Please enter integers only.\n");
            return 1;
        }
    }

    int result = findMaxFrequencyElement(arr, n);
    printf("Element with maximum frequency: %d\n", result);

    return 0;
}


   
