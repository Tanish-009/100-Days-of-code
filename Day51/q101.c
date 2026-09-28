#include <stdio.h>

int firstOccurrence(int arr[], int n, int target)
{
    int low = 0, high = n - 1;
    int first = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == target)
        {
            first = mid;
            high = mid - 1;   // Search on the left side
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return first;
}

int lastOccurrence(int arr[], int n, int target)
{
    int low = 0, high = n - 1;
    int last = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == target)
        {
            last = mid;
            low = mid + 1;    // Search on the right side
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return last;
}

int main()
{
    int nums[100], n, target;
    int first, last;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted array elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    first = firstOccurrence(nums, n, target);
    last = lastOccurrence(nums, n, target);

    printf("First occurrence: %d\n", first);
    printf("Last occurrence: %d\n", last);
    printf("First and last index: %d, %d\n", first, last);

    return 0;
}