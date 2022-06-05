#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;


    if(s.length()<7)
    {
        cout<<"NO";
        return 0;
    }

    else {
        for (int i = 0; i <= (s.length() - 7); i++)
        {
            int r = 1;
            for (int j = i + 1; j < i + 7; j++) 
            {
                if (s[j] != s[i]) 
                {
                    break;
                } 
                
                else 
                {
                    r++;
                }
            }

            if (r == 7) 
            {
                cout << "YES";
                return 0;
            }
        }
    }

    cout<<"NO";
    return 0;
}