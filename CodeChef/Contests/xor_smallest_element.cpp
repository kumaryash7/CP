// #include<bits/stdc++.h>
// using namespace std; 

// int main(){
//     int t;
//     cin>>t;
//     while(t--){

//         int n,x,y;
//         cin>>n>>x>>y;
//         int arr[n];

//         for(int i=0;i<n;i++){
//             cin>>arr[i];

//         }
//         while(y--){
//         int min=arr[0];
//         int min_index=0;


//         for(int i=0;i<n;i++){
//             if(arr[i]<min){
//                 min=arr[i];
//                 min_index=i;
//             }
//         }

//         arr[min_index] = arr[min_index]^x;


        
        
//         }
//   sort(arr,arr+n);
//         for(int i=0;i<n;i++){
//   cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std; 

int main(){
    int t;
    cin>>t;

    while(t--){

  long long N,X,Y;
  cin>>N>>X>>Y;
  vector <long long> A(N);

  for(int i=0;i<N;i++)
  {
    cin>>A[i];
  }

  priority_queue<long long , vector<long long >, greater<long long>> pq;


  for(auto it: A){
    pq.push(it);
  }


  while(Y>0){

    long long mn =pq.top();

    if((mn^X)>mn){
        pq.pop();
        pq.push(mn^X);
        Y--;
    }
    else{
        if((Y&1)==0) break;
        else{
            pq.pop();
            pq.push(mn^X);
            break;
        }
    }



  }

  int cont=0;
  while(!pq.empty()){
    A[cont]=pq.top();
    pq.pop();
    cont++;
  }



  for(auto it:A){
    cout<<it<< " ";
  }
  cout<<endl;








    }
    return 0;
}