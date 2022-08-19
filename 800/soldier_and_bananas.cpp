#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;

    int total_price = 0;

    int left = 0;

    for (int i = 1; i <= w; i++)
    {
        total_price += (i * k);
    }

    left = total_price - n;
    if (total_price < n)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << left << endl;
    }
    return 0;
}