#include<bits/stdc++.h>
using namespace std; 

int main(){
    int t;
    cin>>t;

    while(t--){




  int n;
  cin>>n;

  vector<int> vc(n);

  for(int i=0;i<n;i++){
    cin>>vc[i];
  }

string s;
cin>>s;


vector<int> v;

for(int i=0;i<n;i++){
    if(s[i] =='0'){
        v.push_back(vc[i]);
    }
}

cout<<*min_element(v.begin(),v.end())<<endl;


    }
    return 0;
}