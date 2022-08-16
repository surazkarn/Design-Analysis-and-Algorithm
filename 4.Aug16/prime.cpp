#include <iostream>
#include <stdlib.h>

using namespace std;

void isPrime_1(int n)
{
    bool result_1 = true;
    int freq_count = 0;
    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
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
    int freq_count = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
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

void isPrime_3(int n, int i=2)
{
    static int count = 0;
    if (n % i == 0)
    {
        count++;
        cout << "\n\nTotal Frequency Count of Algo-3 is: " << count << endl;
        cout << n << " is not a prime." << endl;
        return;
    }
    else if (i<n/2)
    {
        count++;
        isPrime_3(n, i + 1);
    }
    else{
    cout << "\n\nTotal Frequency Count of Algo-3 is: " << count << endl;
    cout << n << " is a prime." << endl;
    return;}
}

int main()
{
    int n=0,i;
    // cout << "Enter a number: ";
    // cin >> n;

    for (i = 0; i < 3;i++)
    {
        cout << "\t\t\n\nFor Algorithm-"<<i+1<<"\n\n";
        n = 0;
        while(n!=10)
        {
            int num = rand();
            if(i==0)
                isPrime_1(num);
            else if(i==1)
                isPrime_2(num);
            else if(i==2)
                isPrime_3(num);
            n++;
        }
    }
    
    return 0;
}