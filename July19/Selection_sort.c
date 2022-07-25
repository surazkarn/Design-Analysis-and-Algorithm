#include <stdio.h>

int main()
{
    int count_swap = 0, count_comparison = 0, i, j, temp, n;

    printf("Enter the no. of elements: ");
    scanf("%d", &n);
    int arr[n];
   
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++)
    {
        temp = i;
        for (j = i + 1; j < n - 1; j++)
        {
            if (arr[j] < arr[temp])
            {
                temp = j;
                count_swap++;
            }
                count_comparison++;
        }

        int te = arr[temp];
        arr[temp] = arr[i]; 
        arr[i] = temp;
        // count_swap++;
    }

    printf("\n\nSwapped: %d\n Comparision: %d", count_swap, count_comparison);

    return 0;
}