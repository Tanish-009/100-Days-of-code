#include <stdio.h>

int main() {
    int n, k, i;
    int arr[1000];
    int sum = 0, maxSum;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    if (k <= 0 || k > n) {
        printf("Invalid value of k");
        return 0;
    }

    for (i = 0; i < k; i++) {
        sum += arr[i];
    }

    maxSum = sum;

    for (i = k; i < n; i++) {
        sum = sum - arr[i - k] + arr[i];

        if (sum > maxSum) {
            maxSum = sum;
        }
    }

    printf("Maximum sum = %d\n", maxSum);

    return 0;
}
