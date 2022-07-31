#include <iostream>
using namespace std;
int main()
{
    int itr = 0, n[] = {4, 8, 16, 32, 64, 128, 256, 512, 1024};
    for (int a = 0; a < 9; a++)
    {
        for (int i = 1; i <= n[a]; i++)
        {
            for (int j = 1; j <= n[a]; j++)
            {
                for (int j = 1; j <= n[a]; j++)
                {
                    itr++;
                }
            }
        }
        cout << itr << endl;
        itr = 0;
    }
    return 0;
}
