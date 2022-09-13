/*
2.1 Write a program to test whether a number n, entered through keyboard is prime or
not by using different algorithms you know for atleast 10 inputs and note down the time
complexity by step/frequency count method for each algorithm & for each input.
Finally make a comparision of time complexities found for different inputs, plot an
appropriate graph & decide which algothm is faster.
*/

#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

void isPrime_1(int n)
{
    bool result_1 = true;
    int freq_count = 0;
    if (n < 2)
        result_1 = false;
    else
        for (int i = 2; i < n / 2; i++)
        {

            if (n % i == 0)
            {
                // freq_count++;
                result_1 = false;
                break;
            }
            freq_count++;
        }
    cout << "\n\nTotal Frequency Count of Algo-1 is: " << freq_count << endl;
    if (result_1)
        cout << n << " is a Prime" << endl;
    else 
        cout << n << " is not a Prime" << endl;
}

void isPrime_2(int n)
{
    bool result_2 = true;
    int sqr = sqrt(n);
    int freq_count = 0;
    if (n < 2)
        result_2 = false;
    else
        for (int i = 2; i < sqr; i++)
        {
            if (n % i == 0)
            {
                // freq_count++;
                result_2 = false;
                break;
            }
            freq_count++;
        }
    cout << "\n\nTotal Frequency Count of Algo-2 is: " << freq_count << endl;
    if (result_2)
        cout << n << " is a Prime" << endl;
    else
        cout << n << " is not a Prime" << endl;
}

void isPrime_3(int n, int i = 2)
{
    // static int count = 0;
    if ((n % i == 0 && i != n)||n<2)
    {
        // count++;
        cout << "\n\nTotal Frequency Count of Algo-3 is: " << i - 2 << endl;
        cout << n << " is not a prime." << endl;
        return;
    }
    else if (i < n)
    {
        // count++;
        isPrime_3(n, i + 1);
    }
    else
    {
        cout << "\n\nTotal Frequency Count of Algo-3 is: " << i - 2 << endl;
        cout << n << " is a prime." << endl;
        return;
    }
}

int main()
{
    int n = 0, i;
    // cout << "Enter a number: ";
    // cin >> n;
    int arr[10];
    for (int i = 0; i < 10; i++)
        arr[i] = rand() % 100;

    for (i = 0; i < 3; i++)
    {
        cout << "\t\t\n\nFor Algorithm-" << i + 1 << "\n\n";
        n = 0;
        while (n != 10)
        {
            if (i == 0)
                isPrime_1(arr[n]);
            else if (i == 1)
                isPrime_2(arr[n]);
            else if (i == 2)
                isPrime_3(arr[n]);
            n++;
        }
    }

    return 0;
}