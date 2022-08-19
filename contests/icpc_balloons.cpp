#include<bits/stdc++.h>
using namespace std; 

int main(){
    int t;
    cin>>t;

    while(t--){


   string s;
   int n;

   cin>>n;
   cin>>s;

   n =s.size();

sort(s.begin(), s.end());
s.erase(unique(s.begin(), s.end()), s.end());

cout<<s.size()+n<<endl;

      






    }
    return 0;
}