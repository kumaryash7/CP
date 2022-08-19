

#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
 
int main()
{
    int t;
    cin>>t;
    
    while(t--) {
         int n;
         cin>>n;
         
         if(n == 1) {
             cout<<"1"<<endl;
             continue;
         }
         
         if(n % 2 == 1) { 
         
         cout<<"1"<<" ";
         int od = 3, ev = 2;
         bool flag = true;
    
         for(int i = 1; i < n; i++) {
                if(flag) {
                    cout<<od<<" ";
                    od += 2;
                    flag = false;
                }
                
                else {
                    cout<<ev<<" ";
                    ev += 2;
                    flag = true;
                }
         }
         
         cout<<endl;
         
         }
         
         else {
             
         int od = 1, ev = 2;
         bool flag = true;
    
         for(int i = 1; i <= n; i++) {
                if(flag) {
                    cout<<ev<<" ";
                    ev += 2;
                    flag = false;
                }
                
                else {
                    cout<<od<<" ";
                    od += 2;
                    flag = true;
                }
         }
         
         cout<<endl;
         
         }
       
    }
 
    return 0;
}
