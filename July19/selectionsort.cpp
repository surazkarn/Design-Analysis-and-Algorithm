#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, temp, index, swap_count = 0, comp_count = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        index = i;
        for (int j = i; j < n ; j++)
        {
            if (arr[j] < arr[index])
            {
                index = j;
                swap_count++;
            }
            comp_count++;
        }
        temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
        
    }

    cout << "Number of swaps: " << swap_count << endl;
    cout << "Number of comparisons: " << comp_count << endl;
    cout << "Sorted Array is:" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i];
    return 0;
}