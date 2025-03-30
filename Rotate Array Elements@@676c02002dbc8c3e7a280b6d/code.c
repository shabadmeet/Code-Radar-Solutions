#include <stdio.h>

// Function to reverse a part of the array
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to rotate the array
void rotateArray(int arr[], int n, int k) {
    // Step 1: Normalize K
    k = k % n;

    // Step 2: Reverse the entire array
    reverse(arr, 0, n - 1);

    // Step 3: Reverse the first K elements
    reverse(arr, 0, k - 1);

    // Step 4: Reverse the remaining elements
    reverse(arr, k, n - 1);
}

int main() {
    int n, k;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of positions to rotate: ");
    scanf("%d", &k);

    rotateArray(arr, n, k);

    printf("Rotated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}