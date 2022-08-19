// #include<bits/stdc++.h>
// using namespace std; 
// void solve(int n, int m){
//     if(n==1 && m==1){
//     cout<<"Tonya"<<endl;
// }

// else if(n==1 && m==2){
//     cout<<"Tonya"<<endl;
// }

// else if(n==1 && m==3){
//     cout<<"Burneka"<<endl;
// }

// else if(n>1 && m>1){
//     if(n>m){
//         while(n>0){
//             for(int i=0;i<n;i++){
//                 n=n-i;
//             }
//         }
//         solve(n,m);
//     }
//     else{
//         while(m>0){
//             for(int i=0;i<m;i++){
//                 m=m-i;
//             }
//         }
//         solve(n,m);
//     }
// }
// }
// int main(){
//     int t;
//     cin>>t;

//     while(t--){

//   int n,m;
//   cin>>n>>m;
  

  
// solve(n,m);





//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std; 

int main(){
    int t;
    cin>>t;

    while(t--){
int n,m;
cin>>n>>m;

if(n%2!=0 && m%2!=0){
    cout<<"Tonya"<<endl;
}
else if(n%2!=0 && m%2==0){
    cout<<"Burenka"<<endl;
}

else if(n%2==0 && m%2!=0){
    cout<<"Burenka"<<endl;
}

else if(n%2==0 && m%2==0){
    cout<<"Tonya"<<endl;
}


    }
    return 0;
}