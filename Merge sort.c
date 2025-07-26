#include <stdio.h>

void merge(int a[], int low, int mid, int high) {
    int l1 = mid - low + 1;  // Length of left subarray
    int l2 = high - mid;     // Length of right subarray

    int L[l1], R[l2];        // Temporary arrays for left and right subarrays

    // Copying data to temporary arrays L[] and R[]
    for (int i = 0; i < l1; i++)
        L[i] = a[low + i];
    for (int j = 0; j < l2; j++)
        R[j] = a[mid + 1 + j];

    // Merging the two subarrays
    int i = 0, j = 0, k = low;
    while (i < l1 && j < l2) {
        if (L[i] <= R[j]) {
            a[k] = L[i];
            i++;
        } else {
            a[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of L[] if any
    while (i < l1) {
        a[k] = L[i];
        i++;
        k++;
    }

    // Copy remaining elements of R[] if any
    while (j < l2) {
        a[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int a[], int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;

        // Recursively sort first and second halves
        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);

        // Merge the sorted halves
        merge(a, low, mid, high);
    }
}

void printArray(int a[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", a[i]);
    printf("\n");
}

int main() {
    int a[] = {12, 11, 13, 5, 6, 7};
    int a_size = sizeof(a) / sizeof(a[0]);

    printf("Given array: \n");
    printArray(a, a_size);

    mergeSort(a, 0, a_size - 1);

    printf("\nSorted array: \n");
    printArray(a, a_size);
    return 0;
}
