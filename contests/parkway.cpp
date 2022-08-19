#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
 
    while(t--)
    {
        int n;
        long int m;
 
        cin>>n>>m;
 
        long int A[n];
        long int sum=0;
 
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
            sum+=A[i];
        }
 
        if(sum<=m)
        {
            cout<<0<<endl;
        }
 
        else
        {
            cout<<sum-m<<endl;
        }
    }
    return 0;
}