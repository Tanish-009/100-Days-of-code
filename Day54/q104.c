#include <stdio.h>

int main() {
    int n, x;
    int leftSum, rightSum;
    
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    x = -1;

    for (int i = 1; i <= n; i++) {
        leftSum = i * (i + 1) / 2;
        rightSum = (n * (n + 1) / 2) - ((i - 1) * i / 2);

        if (leftSum == rightSum) {
            x = i;
            break;
        }
    }

    printf("Pivot integer = %d\n", x);

    return 0;
}