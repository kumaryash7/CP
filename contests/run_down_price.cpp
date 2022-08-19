#include<bits/stdc++.h>
using namespace std; 

int main(){
    int t;
    cin>>t;

    while(t--){

  
 long long  int m;
   cin>>m;

   int d=0;


   for(int i=0;i<=9;i++){
    if(pow(10,i)==m){
        cout<<0<<endl;

    }

   }


if(m>0 && m<10 && m!=1){
    cout<<(m-1)<<endl;
}
if(m>10 && m<100){
    cout<<(m-10)<<endl;
}
if(m>100 && m<1000){
    cout<<(m-100)<<endl;
}
if(m>1000 && m<10000){
    cout<<(m-1000)<<endl;
}
if(m>10000 && m<100000){
    cout<<(m-10000)<<endl;
}
if(m>100000 && m<1000000){
    cout<<(m-100000)<<endl;
}
if(m>1000000 && m<10000000){
    cout<<(m-1000000)<<endl;
}
if(m>10000000 && m<100000000){
    cout<<(m-10000000)<<endl;
}
if(m>100000000 && m<1000000000){
    cout<<(m-100000000)<<endl;
}









    }
    return 0;
}