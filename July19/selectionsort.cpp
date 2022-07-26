#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n, temp, index, swapCount = 0, compCount = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
       // arr[i] = i + 1;
arr[i] = (int)rand();
    for (int i = 0; i < n; i++)
    {
        index = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[index])
            {
                index = j;
                swapCount++;
            }
            compCount++;
        }
        temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }

    cout << "Number of swaps: " << swapCount << endl;
    cout << "Number of comparisons: " << compCount << endl;
    cout << "Sorted Array is:" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i]<<" ";
    return 0;
}