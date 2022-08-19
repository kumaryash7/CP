#include <bits/stdc++.h>
using namespace std;
bool distinct(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                return false;
            }
        }
    }

    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bool flag = true;
        int arr[n];

        int repeating_element = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    flag = false;
                }
            }
        }

        if (flag == true)
        {
            cout << "0" << endl;
        }
        else
        {
            for (int i = 0; i <n ; i++)
            {
                if (distinct(arr, n - i))
                {
                    cout << i << endl;
                    break;
                }
            }
        }
    }
    return 0;
}