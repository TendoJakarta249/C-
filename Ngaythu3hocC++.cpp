#include <iostream>
using namespace std;

int p[10][11];

int main()
{
    int n;
    cin >> n;

    // tiền xử lý lũy thừa, giống hàm pow 
    for (int d = 0; d <= 9; d++)
    {
        for (int k = 0; k <= 10; k++)
        {
            int val = 1;
            for (int i = 1; i <= k; i++)
                val *= d;
            p[d][k] = val;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        int t = i, k = 0;

        while (t > 0)
        {
            k++;
            t /= 10;
        }

        t = i;
        int sum = 0;

        while (t > 0)
        {
            int d = t % 10;
            sum += p[d][k];
            t /= 10;
        }

        if (sum == i)
            cout << i << " ";
    }
}