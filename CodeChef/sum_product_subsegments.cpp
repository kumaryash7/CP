#include<bits/stdc++.h>
using namespace std; 

int main(){
    int t;
    cin>>t;


    while(t--){


  int x,y;

  int ans[2][2];


  cin>>x>>y;
  int z=max(x,y);
  for(int i=0;i<=z;i++){
    for(int j=0;j<=z;j++){
        if(i+j==x || i*j==y && i!=j){
            
        }
    }
  }





    }
    return 0;
}