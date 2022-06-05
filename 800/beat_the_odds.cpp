#include<bits/stdc++.h>
using namespace std; 

int main(){
    int n;
    cin>>n;

    int arr[n];
   int key;
  cin>>key;
  
   int counter =0;


    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){

   if(arr[i]==key){
       counter++;
   }
    }
    cout<<counter;
    return 0;
}