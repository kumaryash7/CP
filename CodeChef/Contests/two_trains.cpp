#include<bits/stdc++.h>
using namespace std; 

int main(){
  int v,car;
  cin>>v;

  for(int m=0;m<v;m++){

  int sum=0,diff,i;

  cin>>car;

  int a[car],b[car];

  a[0]=0;
  b[0]=0;

  for(int i=0;i<car;i++){
    cin>>a[i];
    sum+=a[i];
    b[i]=a[i];
    a[i]=sum;
  }

  for(int i=0;i<car-21;i++){

   diff=a[i+1]-b[i];

   if(diff>0){
    b[i+1]=b[i]+diff+b[i+1];
   }
   else{
    b[i+1]=b[i]+b[i+1];
   }

  }
cout<<b[i]<<" "<<endl;

  }
  return 0;
}