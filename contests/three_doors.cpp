#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int x;
        cin >> x;

        int arr[3];

        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }

      

        if (x == 1 && arr[0] == 2 && arr[1] == 3 && arr[2] == 0)
        {
            cout << "YES" << endl;
        }
       else if (x == 1 && arr[0] == 3 && arr[1] == 0 && arr[2] == 2)
        {
            cout << "YES" << endl;
        }

       else if (x == 2 && arr[0] == 3 && arr[1] == 1 && arr[2] == 0)
        {
            cout << "YES" << endl;
        }
      else  if (x == 2 && arr[0] == 0 && arr[1] == 3 && arr[2] == 1)
        {
            cout << "YES" << endl;
        }

      else if (x == 3 && arr[0] == 2 && arr[1] == 0 && arr[2] == 1)
        {
            cout << "YES" << endl;
        }
       else if (x == 3 && arr[0] == 0 && arr[1] == 1 && arr[2] == 2)
        {
            cout << "YES" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}