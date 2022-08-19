#include<bits/stdc++.h>
using namespace std; 

int main(){
    int t;
    cin>>t;


    while(t--){

  int n;
  cin>>n;
bool flag =false;
  int arr[n];

  for(int i=0;i<n;i++){
    cin>>arr[i];
  }


sort(arr,arr+n);

//   for(int i=1;i<n;i++){

//     for(int j=0;j<n;j++){
//         if(arr[i]-arr[j]==0){
//             flag=true;
//         }
//     }
//   }


//   if(flag==true){
//     cout<<"YES"<<endl;
//   }
//   else{
//     cout<<"NO"<<endl;

//   }

   while(arr[1]==0){
    for(int i=0;i<n;i++){
        if(arr[n-1-i]-arr[n-2-i]==0){
            flag=true;
        }
    }

       
   }
if(flag==true){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}

    }
    return 0;
}