#include <stdio.h>

int main() {
    int n, i, j;
    
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n], result[n];

    printf("Enter the elements of array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find next greater element
    for (i = 0; i < n; i++) {
        result[i] = -1;

        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                result[i] = arr[j];
                break;
            }
        }
    }

    printf("Next Greater Elements:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}