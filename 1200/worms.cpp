// #include <bits/stdc++.h>
// using namespace std;
  //TIME LIMIT EXCEEDED ON TEST CASE 14 
// int main()
// {
//     int n;
//     cin >> n;

//     int arr[n];
//     int sum[n] = {0};

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int m;
//     cin >> m;
//     int q[m];
//     for (int i = 0; i < m; i++)
//     {
//         cin >> q[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             sum[i] += arr[j];
//         }
//     }

//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {

//             if (q[i] == sum[j])
//             {
//                 cout << j + 1 << endl;
//                 break;
//             }
//             else if (q[i] < sum[j])
//             {
//                 cout << j + 1 << endl;
//                 break;
//             }

//             else if (q[i] < sum[j] && q[i] > sum[j - 1])
//             {
//                 cout << j + 1 << endl;
//                 break;
//             }
//         }
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int n, m, t, sum(0);
    cin >> n;
    int counts[n];

    for (int i = 0; i < n; i++)
    {
        cin >> t;
        sum += t;
        counts[i] = sum;
    }

    int ind(0), worms[sum + 1];

    for (int i = 1; i <= sum; i++)
    {
        if (i > counts[ind])
            ind++;
        worms[i] = ind + 1;
    }

    cin >> m;

    for (int i = 0; i < m; i++)
    {
        cin >> t;
        cout << worms[t] << endl;
    }

    return 0;
}