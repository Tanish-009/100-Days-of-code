#include <stdio.h>

int main() {
    int n, i, j;
    int arr[100];

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the elements of array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Previous Greater Elements:\n");

    for (i = 0; i < n; i++) {
        int pge = -1;

        for (j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                pge = arr[j];
                break;
            }
        }

        printf("%d ", pge);
    }

    return 0;
}