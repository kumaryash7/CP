#include<bits/stdc++.h>
using namespace std; 

int main(){
    int t;
    cin>>t;


    while(t--){

   int n;

   cin>>n;
   int result[n];
   string array[n];



   for(int i=0;i<n;i++){
    cin>>array[i];

   }
  
   
  for(int i=0;i<n;i++){

   for(int j=0;j<n;j++){
    if(i!=j){
    if(array[i]==array[j]+array[j+1]){
       
   result[i]==1;



    }
    else{
        result[i]==0;
    }
    }
   }



for(int i=0;i<n;i++){
    cout<<result[i];
}

    }
    return 0;
}
}