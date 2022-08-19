#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int arr[2][2];

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> arr[i][j];
            }
        }
        int count = 0;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                if (arr[i][j] == 1)
                {
                    count++;
                }
            }
        }

        if (count == 0)
        {
            cout << "0\n";
        }

        else if (count < 3)
        {
            cout << "1\n";
        }

        else
        {
            cout << "2\n";
        }
    }
    return 0;
}