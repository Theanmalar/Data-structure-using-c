Selection sort 
#include <stdio.h>

void selectionSort(int arr[], int n) {
    int i, j, minIdx, temp;
    for (i = 0; i < n - 1; i++) {
        minIdx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        temp = arr[minIdx];
        arr[minIdx] = arr[i];
        arr[i] = temp;
    }
}
int main() {
    int i, n;
    printf("Enter the size: ");
    scanf("%d", &n);

    int a[n];  
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    selectionSort(a, n);

    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
