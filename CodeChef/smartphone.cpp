#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int budget[n];
    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
    {

        budget[i] = arr[i] * (n - i);
    }

    int max = budget[0];

    for (int i = 0; i < n; i++)
    {
        if (budget[i] > max)
        {
            max = budget[i];
        }
    }

    cout << max << endl;

    return 0;
}
