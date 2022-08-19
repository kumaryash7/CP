#include<bits/stdc++.h>
using namespace std; 

int main(){
    int t;
    cin>>t;

    while(t--){
    int n;
    cin>>n;


    int res[n];
    string arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];

    }


    for(int i=0;i<n;i++){
        for(int j=0;j<n;i++){
     if(i!=j){
     if(arr[i]==arr[j]+arr[j+1]){
        res[i]=1;
     }
     else{
        res[i]=0;
     }
   

     }


        }
    }






for(int i=0;i<n;i++){
    cout<<res[i];
}


    }
    return 0;
}