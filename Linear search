#include <stdio.h>

// Linear search function
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Return the index where target is found
        }
    }
    return -1; // Return -1 if target is not found
}

int main() {
    int arr[] = {10, 23, 5, 76, 34, 89, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 34;

    // Search for the target
    int result = linearSearch(arr, size, target);

    // Display result
    if (result != -1) {
        printf("Element %d found at index %d\n", target, result);
    } else {
        printf("Element %d not found in the array\n", target);
    }

    return 0;
}
