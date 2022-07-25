#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n, swap_count = 0, comp_count = 0, temp;
    cin >> n;
    int arr[n];
    for (int i = 0; i <n; i++)
       // arr[i] = i + 1;
       arr[i] = (int)rand();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swap_count++;
            }
            comp_count++;
        }
    }
    cout << "Number of swaps: " << swap_count << endl;
    cout << "Number of comparisons: " << comp_count << endl;
    cout << "Sorted Array is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    return 0;
}