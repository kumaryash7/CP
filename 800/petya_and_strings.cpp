#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    string t;

    cin >> s >> t;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    transform(t.begin(), t.end(), t.begin(), ::tolower);

    cout << s.compare(t) << endl;
    return 0;
}