#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, t, x;
    cin >> n;
    int a[100];
    for (int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
    int giatri = 1;
    x = 0;
    for (int i = 0;i < n;i++)
    {
        t = 0;
        for (int j = 0;j < n;j++)
        {
            if (a[i] == a[j]) t++;
        }
        if (t > giatri)
        {
            giatri = t;
            x = i;
        }
    }
    if (giatri == 1) cout << "Khong co phan tu nao xuat hien nhieu nhat";
    if (giatri > 1) cout << a[x];
}

