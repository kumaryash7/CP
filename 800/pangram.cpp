#include<bits/stdc++.h>
using namespace std; 

int main(){

    int n;
    cin>>n;

    string s;

for(int i=0;i<n;i++){
    if(s[i]>=65 &&s[i]<=97){
        s[i]+=32;
    }
}

cout<<s;



    return 0;
}