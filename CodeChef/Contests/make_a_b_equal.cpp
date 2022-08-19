#include<bits/stdc++.h>
using namespace std; 
bool match(int a,int b){

while(a==b){


    if(a<b){
        a=a*2;
    }
    else if(a>b){
        b=b*2;
    }
}
return true;

}
int main(){
    int t;
    cin>>t;
    while(t--){

  int a,b;
  bool flag =false;

  cin>>a>>b;

  if(a==b){
    flag=true;
  }

// else{
    
 
// }
// cout<<match(2,5);

  else if(a<b){

while(a<b){

  a=a*2;

  if(a==b){
  flag=true;
  }
 


}

  }
else if(a>b){

    while(a>b){


        b=b*2;
        if(a==b){
            flag=true;
        }
    }
}
if(flag==true){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
    }
    return 0;
}