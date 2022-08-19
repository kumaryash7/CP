// // #include<bits/stdc++.h>
// // using namespace std; 

// // int main(){
// //     int t;
// //     cin>>t;

// //     while(t--){

// //   int n,k;
// //   cin>>n>>k;
// //   vector<int> v;
// //   vector<int> v2;


// //  vector<pair<int,int>> p;
// //   for(int i=1;i<=n;i++){

// //  v.push_back(i);
// //  v2.push_back(i);

// //   }

// //   for(int i=0;i<v.size();i++){
// //     for(int j=i+1;j<v2.size();j++){


// //   p[i].first=v[i];
// //   p[i].second=v2[j];


// //     }
// //   }

// //   bool flag =false;


// //   for(int i=0;i<p.size();i++){

// // //   if((p[i].first+k)%4==0 || p[i].second%4==0){
// // //     flag=true;
// // //   }

// // cout<<p[i].first<<" "<<p[i].second<<endl;

// //   }


// // if(flag==true){
// //     cout<<"YES"<<endl;
// // }
// // else{
// //     cout<<"NO"<<endl;
// // }

// //     }
// //     return 0;
// // }

// #include<bits/stdc++.h>
// using namespace std; 

// int main(){
//     int t;
//     cin>>t;

//     while(t--){

//    int n,k;


//    cin>>n>>k;

//   vector<pair<int,int>> v;

//   for(int i=0;i<n;i++){
//     for(int j=i+1;j<n;j++){
//         v[i].first=i;
//         v[i].second=j;
//     }
//   }
// vector<pair<int,int>> p;


//   for(int i=0;i<v.size();i++){

//   if((v[i].first+k)%4==0  || v[i].second%4==0){

//   v[i].first=p[i].first;
//   v[i].second=p[i].second;
//   }
   
//   }
// int sum=0;
// bool flag =false;
//   for(int i=1;i<=n;i++){
//     sum+=i;
//   }

//   for(int i=0;i<p.size();i++){
//   if(p[i].first+ p[i].second==sum){
//     flag =true;
//   }


//   }



// if(flag==true){
//     cout<<"YES"<<endl;
// }
// else{
//     cout<<"NO"<<endl;
// }



//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std; 

int main(){
    int t;
    cin>>t;


    while (t--)
    {
        int n,k;

        cin>>n>>k;

        if(k%4==0){
            cout<<"NO"<<endl;
            continue;
        }

        if(k%4==1){
            cout<<"YES\n";

            for( long long int index=1;index<n;index+=2){
                cout<<index<<" "<<index+1<<endl;
                continue;
            }
        }
            if(k%4==2){
                cout<<"YES\n";

                for(long long i=1;i<n;i+=2){
                    if(i%4==1){
                        cout<<i+1<<" "<<i<<endl;
                    }
                    else{
                        cout<<i<<" "<<i+1<<endl;
                    }
                }
            }
            if(k%4==3){
                cout<<"YES\n";
                for( long long i=1;i<n;i+=2){
                    cout<<i<<" "<<i+1<<endl;
                    continue;
                }
            }
    }
    
    return 0;
}