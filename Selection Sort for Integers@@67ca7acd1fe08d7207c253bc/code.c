#include <stdio.h>

// Bubble Sort function
void sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {  // Fixed loop condition
        for (int j = 0; j < n - i - 1; j++) {  // Fixed loop condition
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {  // Fixed loop condition
       printf("%d ", arr[i]);  // Added space for readability
    }
    printf("\n"); // New line for better formatting
}