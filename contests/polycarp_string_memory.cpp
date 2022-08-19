#include<bits/stdc++.h>
using namespace std; 



int main(){
    int t;
    cin>>t;


    while(t--){

    string s;
    cin>>s;

   int size =s.length();

   for(int i=0;i<s.length();i++){
    if(s[i]==s[i+1]){
        size--;
    }
   }
if(size==1){
    cout<<1<<endl;
}

for(int i=0;i<s.length();i++){
    if(size>(3*i)&&size<=(3*(i+1))){
        cout<<(i+1)<<endl;
        
    }
}







    }
    return 0;
}