Shell sort
#include <stdio.h>

void shellSort(int a[], int n) {
    int gap, i, j, temp;

    for (gap = n / 2; gap >= 1; gap = gap / 2) {
        for (j = gap; j < n; j++) {
            for (i = j - gap; i >= 0; i = i - gap) {
                if (a[i] > a[i + gap]) {
                    temp = a[i];
                    a[i] = a[i + gap];
                    a[i + gap] = temp;
                } else {
                    break;
                }
            }
        }
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

    shellSort(a, n);

    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
