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

        int arr[n];
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);

        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] == arr[i + 1])
            {

                arr[i] = 0;
                arr[i + 1] = 0;
                i = i + 1;
            }
        }
        


        for (int i = 0; i < n; i++)
        {
            if (arr[i] != 0)
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}