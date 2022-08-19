#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    int rem = 0;
    while (b != 0)
    {

        rem = a % b;

        a = b;
        b = rem;
    }

    return a;
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n, l, r;

        cin >> n >> l >> r;

        int arr[n];


        for(int i=l;i<=r;i++){

            while(n>0){

             

                n--;
            }
        }
    }
    return 0;
}