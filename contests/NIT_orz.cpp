#include<bits/stdc++.h>
using namespace std; 

int main(){
    
int t;
cin>>t;

while(t--){




int n,z;
cin>>n>>z;

int arr[n];

for(int i=0;i<n;i++){
    cin>>arr[i];
}

int i=0;

while(i<n){

 arr[i]=(arr[i]|z);

 z=(arr[i]&z);

    i++;
}


int max =arr[0];

for(int i=0;i<n;i++){
    if(arr[i]>max){
        max=arr[i];
    }
}

cout<<max<<endl;


}

    return 0;
}