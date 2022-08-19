#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;
typedef long double ld;



vector<ll> vec;
ll n;

int main()
{
   

    ll z;
    cin >> z;

    while (z--)
    {
        cin >> n;

        vec.resize(n);
        for (auto &c : vec)
            cin >> c;

        sort(vec.begin(), vec.end());

        cout << vec[n - 1] + vec[n - 2] - vec[0] - vec[1] << "\n";
    }

    return 0;
}