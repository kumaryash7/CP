#include<bits/stdc++.h>
using namespace std; 

int main(){
    int t;
    cin>>t;

    while(t--){

   int n,k;
   cin>>n>>k;

   int p[n];
   

   for(int i=0;i<n;i++){
    cin>>p[i];
   }

   int count=0;
   int sum=0;

   for(int i=0;i<k;i++){
    sum+=p[i];
   }

   int smallest_sum=p[0];

   for(int i=0;i<n;i++){
    if(p[i]<smallest_sum){
        p[i]=smallest_sum;
    }
   }




for(int j=1;j<=k;j++){
    for(int i=j+1;i<=n;i++){
        if(p[j]>p[i]){
          int temp=p[j];
          p[j]=p[i];
          p[i]=temp;

          count++;
        }
    }
}

cout<<count<<endl;



    }
    return 0;
}