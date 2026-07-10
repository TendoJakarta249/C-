#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, k, x, d, t;
    cin >> n;
    int a[100], b[100];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    reverse(a, a + n);
    bool ok = true;
    for (int i = 0; i < n;i++)
    {
        if (a[i] != b[i])
        {
            ok = false;
            break;
        }
    }
    if (ok) cout << "YES";
    else cout << "NO";
}