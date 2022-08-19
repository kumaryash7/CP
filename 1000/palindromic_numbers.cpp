#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int length;
        cin >> length;

        int n;
        cin >> n;
        int reverse = 0;

        while (n > 0)
        {
            int rem = n % 10;
            reverse = reverse * 10 + rem;

            n = n / 10;
        }

        
    }
    return 0;
}