#include <bits/stdc++.h>
using namespace std;
string allSubsequence(string s, string ans)
{

    if (s.length() == 0)
    {
        return " ";
    }

    char ch = s[0];

    string ros = s.substr(1);

    return allSubsequence(ros, ans + ch);

    return allSubsequence(ros, ans);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        string s;
        cin >> s;

        // string ans="";
        // int subs= pow(2,s.length());

       vector<string> v;
       
       


       for(int i=0;i<s.length();i++){

  for(int j=0;j<s.length();j++){

  

  }

       }

 

    }
    return 0;
}