#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int n,q;
    cin>>n>>q;

    long int A[n];

    for(long int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    for(int i=1;i<n;i++){
        int current =A[i];
     int j=i-1;   
     while(A[j]>current && j>=0){
        A[j+1]==A[j];
        j--;
     }
     A[j+1]=current;
       }

       

    while(q--)
    {
        long int x,y;
        cin>>x>>y;

        long int sum=0;
        for(long int i=n-x;i<=(n-x+y-1);i++)
        {
            sum+=A[i];
        }

        cout<<sum<<endl;
    }
    return 0;
}