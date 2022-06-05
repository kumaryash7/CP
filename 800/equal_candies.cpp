#include<bits/stdc++.h>
using namespace std; 
 
int main(){
    int t;
    cin>>t;
 
while(t--){
 
int sum =0;
    int n;
    cin>>n;
    
 
 
 
 
    // while(t--){
 
 
int arr[n];
int position=1;
 
 
for(int i=0;i<n;i++){
    cin>>arr[i];
 
}
 
int maxNo =arr[0];
 
int minNo =arr[0];
 
for(int i=0;i<n;i++){
    if(arr[i]<minNo){
        minNo=arr[i];
        position =i;
 
    }
}
 
 
int diff =0;
 
 
for(int i=0;i<n;i++){
  diff=arr[i]-minNo;
  sum+=diff;
}
 
 
  cout<<sum<<endl;
  
}
    return 0;
}