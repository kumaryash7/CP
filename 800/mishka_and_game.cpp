#include<bits/stdc++.h>
using namespace std; 

int main(){
    int n;
    cin>>n;
   int count_m =0;

 int count_draw=0;
 int count_c=0;
    while(n--){

   int m,c;
   cin>>m>>c;



   if(m>c){
    count_m++;
   }
   else if(m==c){
    count_draw++;
   }
   else{
    count_c++;
   }

  

    }
  if(count_m>count_c){
    cout<<"Mishka"<<endl;
  }
  else if(count_m<count_c){
    cout<<"Chris"<<endl;
  }
  else{
    cout<<"Friendship is magic!^^"<<endl;
  }
    return 0;
}