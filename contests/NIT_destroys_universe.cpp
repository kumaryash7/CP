
#include <bits/stdc++.h>
using namespace std;

int mex(vector<int> &arr, int n)
{
    bool flag = false;
    int x = 0;

    for (int i = 1; i <= n + 1; i++)
    {

        flag = false;
        for (int j = 0; j < n; j++)
        {

            if (arr[j] == i)
            {
                flag = true;
                x = i;
                break;
            }
        }

        if (flag == false)
            break;
    }

    return x + 1;
}
int main()
{
    // vector<int> arr;
    // int n, i, a;

    // cin >> n;

    // for (i = 0; i < n; i++)
    // {
    //     cin >> a;
    //     arr.push_back(a);
    // }

    // cout << mex(arr, n);

    int t;
    cin>>t;
    while(t--){

  int n;
  cin>>n;

  int arr[n];

  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  








    }
    return 0;
}