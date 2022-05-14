#include<bits/stdc++.h>


using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;

        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

    int sum=0;
    int count =0;
    int i=0;
    int j=n-1;
    int temp_count=0;


    while (j - i >= 1) {
        if (sum <= 0) {
            sum += a[i];
            i++;
            count++;
        } else {
            sum -= a[j];
            j--;
            count++;
        }
        if(sum == 0) {
            temp_count = count;
        }
    }

   cout<<temp_count;

    }  

    return 0;
}