#include<bits/stdc++.h>
using namespace std; 

int main(){
    int t;
    cin>>t;

    while(t--){

   int x;
   cin>>x;

   int discount=0;

   if(x<=100){
    discount=0;
   }
   else if(x>100 && x<=1000){
  discount=25;
   }
   else if(x>1000 && x<=5000){
    discount=100;
   }
   else if(x>5000){
    discount=500;
   }

   cout<<x-discount<<endl;



    }
    return 0;
}