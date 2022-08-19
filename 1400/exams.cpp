// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//   int count=0;
//   int first_max=0;
//   int sec_max=0;
//     vector<pair<int, int>> v(n);

//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i].first >> v[i].second;
//     }

//    sort(v.begin(),v.end());

//     for(int i=0;i<n;i++){
//     // cout<<v[i].first<<" "<<v[i].second<<endl;

//   if(v[i].first>first_max){
//     first_max=v[i].first;
//   }

//   if(v[i].second>sec_max){
//    sec_max=v[i].second;
//   }
  
     

//     }

//     first_max>sec_max ? cout<<first_max: cout<<sec_max<<endl;


//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

//{
#define ceil(n,k) ((n-1)/k+1)
#define sets(a) memset(a, -1, sizeof(a))
#define clr(a) memset(a, 0, sizeof(a))
#define max(a,b) ((a)>(b)? (a):(b))
#define min(a,b) ((a)<(b)? (a):(b))
#define fr(n) for(int i=0;i<n;i++)
#define pb push_back
#define INF 10000007
#define all(v) v.begin(),v.end()
#define mp make_pair
#define ff first
#define ss second

typedef long l;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<long long,long long> pll;
//}

int n, a, b;
pii d[5003];

bool cmp(pll d1, pll d2){
    if(d1.ff==d2.ff)
        return d1.ss<d2.ss;

    return d1.ff<d2.ff;
}

main(){
    cin>>n;
    fr(n){
        cin>>a>>b;
        d[i]= mp(a,b);
    }

    sort(d,d+n,cmp);

    int last= d[0].ss;
    for(int i=1;i<n;i++){
        if(d[i].ss>=last)
            last= d[i].ss;
        else
            last= d[i].ff;
    }

    cout<<last<<endl;
}