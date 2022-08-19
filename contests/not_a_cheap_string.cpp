#include<bits/stdc++.h>
using namespace std; 

int main(){
 int t;
 cin>>t;


 while(t--){


 string w;
 int p;

 cin>>w;
 cin>>p;
 
int sum=0;
 for(int i=0;i<w.length();i++){
   sum+=(w[i]-96);
 }


if(sum<=p){
    cout<<w<<endl;
}
else{
    for(int i=0;i<w.length();i++){
        
    }
}













 }

    return 0;
}