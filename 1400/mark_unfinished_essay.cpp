// #include<bits/stdc++.h>
// using namespace std; 

// int main(){
//     int t;
//     cin>>t;

//     while(t--){

//      int n,c,q;
//   cin>>n>>c>>q;

//   string s;
//   cin>>s;

//   string new_string=s;

//   vector<pair<int,int>> v(c);

//   for(int i=0;i<c;i++){
//     cin>>v[i].first>>v[i].second;
//   }

//   vector<int> v2(q);

//   for(int i=0;i<q;i++){
//     cin>>v2[i];
//   }


// for(int i=0;i<c;i++){
    
//   new_string= new_string+ new_string.substr(v[i].first-1,v[i].second-1);

// }
// cout<<new_string<<endl;

// // for(int i=0;i<q;i++){
// //     cout<<new_string[v2[i+1]]<<endl;
// // }


//     }
//     return 0;
// }
#include<bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){
    int n, c, q; cin >> n >> c >> q;
    string s; cin >> s;

    vector<ll> left(c+1), right(c+1), diff(c+1);
    left[0] = 0;
    right[0] = n;

    for(int i=1; i<=c; ++i){
    	ll l, r; cin >> l >> r;
    	l--; r--;
    	left[i] = right[i-1];
    	right[i] = left[i] + (r-l+1);
    	diff[i] = left[i] - l;
    }

    while(q--){
    	ll k; cin >> k;
    	k--;
    	for(int i=c; i>=1; --i){
    		if(k < left[i]) continue;
    		else k -= diff[i];
    	}
    	cout << s[k] << "\n";
    }

}

int main(){
    int tt; cin >> tt;
    while(tt--) solve();
}