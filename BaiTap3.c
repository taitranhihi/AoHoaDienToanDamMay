#include <stdio.h>

// Hàm sắp xếp dãy số nguyên bằng thuật toán Insertion Sort
void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int n;
    printf("Nhập số lượng phần tử của dãy số: ");
    scanf("%d", &n);

    int arr[n], i;

    printf("Nhập các phần tử của dãy số:\n");
    for (i = 0; i < n; i++) {
        printf("Phần tử thứ %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    insertionSort(arr, n);

    printf("Dãy số sau khi sắp xếp:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
