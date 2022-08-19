
#include <bits/stdc++.h> 
using namespace std; 
#define ll long long int 

void solve(){ 
ll n,k; 
cin>>n>>k; 
ll a[n]; 
for(int i =0;i<n;i++){ 
cin>>a[i]; 
} 
ll pref[n]; 
pref[0] = a[0]; 
for(int i = 1;i<n;i++){ 
pref[i]= max(pref[i-1],a[i]); 
} 
while(k--){ 
ll x,y; 
cin>>x>>y; 
x--; 
if(pref[x]!=a[x]){ 
cout<<0<<endl; 
}else{ 
int upper = upper_bound(pref,pref+n, a[x])-pref; 
if(pref[x]==pref[n-1]){ 
if(x==0){ 
cout<<max(0ll, y)<<endl;
}else{ 
cout<<max(0ll, y-x+1)<<endl; 
} 
}else{ 

if(x!=0) 
y-=(x-1); 
cout<<max(0ll,min(y, (x!=0) + upper-x-1))<<endl; 
} 
} 
} 
}
int main(){ 
ios_base::sync_with_stdio(false); 
int t=1; 
cin>>t; 
while(t--){
solve(); 
} 
}