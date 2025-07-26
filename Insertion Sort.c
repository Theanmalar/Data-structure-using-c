#include <stdio.h>
void insertionSort(int a[], int n) {
    for (int i = 1; i < n; i++) {
       int  temp=a[i];
        int j=i-1;
        while (j >= 0 && a[j] > temp) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
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


    insertionSort(a , n);


    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
