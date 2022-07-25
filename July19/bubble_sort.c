#include <stdio.h>

int main()
{
    int count_swap = 0, count_comparison = 0, temp, i, j, n;
    printf("Enter a no. of elements: ");
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n - i-1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                count_swap++;
            }
            count_comparison++;
        }
    }

    printf("\n\nSwapped: %d\n Comparision: %d", count_swap, count_comparison);
    return 0;
}
