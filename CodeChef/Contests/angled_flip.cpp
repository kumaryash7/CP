#include<bits/stdc++.h>
using namespace std; 
#define isFind(M,Num) (m.find(Num)==m.end())

int main(){
    int t;
    cin>>t;

    while(t--){

  int n,m;
  cin>>n>>m;

  bool b=true;

  if(n==1 || m==1){
    int A[n][m];
    int B[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
  cin>>A[i][j];

        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
  cin>>B[i][j];

        }
    }

  
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(A[i][j]!= B[i][j]){
                b=false;
                break;
            }
        }
     }

  }

  else{
    int Num;
    map<int, int> A1,A2,B1,B2;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>Num;
            if((i+j)%2!=0){
                if(A1,Num){
                    A1.insert({Num,1});

                }
                else{
                    A1.insert({Num,A1[Num]+1});
                }
                }
                else{
                    if(isFind(A2,Num)){
                     A2.insert({Num,1});
                    }
                    else{
                        A2.insert({Num,A1[Num]+1});
                    }
            }
        }


    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>Num;
            if((i+j)%2!=0){
                if(B1,Num){
                    B1.insert({Num,1});

                }
                else{
                    B1.insert({Num,B1[Num]+1});
                }
                }
                else{
                    if(isFind(B2,Num)){
                     B2.insert({Num,1});
                    }
                    else{
                        B2.insert({Num,B1[Num]+1});
                    }
            }
        }


    }




    
  }

  for(int i=0;i<n;i++){

    for(auto it: A1){
        if(it.second != B1[it.first])
    }
  }




    }
    return 0;
}