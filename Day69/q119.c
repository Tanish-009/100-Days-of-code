#include <stdio.h>

int main() {
    int n, i, repeated = -1;

    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        int index = arr[i];

        if (arr[index] < 0) {
            repeated = index;
            break;
        }

        arr[index] = -arr[index];
    }

    printf("%d", repeated);

    return 0;
}