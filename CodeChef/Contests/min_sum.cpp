#include<bits/stdc++.h>
using namespace std; 
void solve(){
  long long int a,b;
  cin>>a>>b;
  vector<long long int> v;

  for( long long int i=0;i<a;i++){
    cin>>b;
    v.push_back(b);
  }

  long long int min_gcd=10000000;
  for(int i=0;i<i<a-1;i++){
    long long int c= __gcd(v[i],v[i+1]);

    if(c<min_gcd){ min_gcd=c;}


  }

  cout<<min_gcd*a<<endl;




}
int main(){
    int t;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}