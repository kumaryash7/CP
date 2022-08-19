#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        int same_digits = 0;

        int distict_digits = 0;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if (n == 1)
        {
            cout << 0 << endl;
        }

        if (n == 2 && arr[0] == arr[1])
        {
            cout << 1 << endl;
        }
        if (n == 2 && arr[0] != arr[1])
        {
            cout << 0 << endl;
        }
        else
        {
            sort(arr, arr + n);

            for (int i = 0; i < n; i++)
            {

                if (arr[i] == arr[i + 1])
                {
                    same_digits++;
                }
                else
                {
                    distict_digits++;
                }
            }

            cout << same_digits << " " << distict_digits;
        }
    }
    return 0;
}