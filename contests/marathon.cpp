// #include<bits/stdc++.h>
// using namespace std; 

// int main(){
//     int t;
//     cin>>t;



//     while(t--){


//    int a,b,c,d;

//    cin>>a>>b>>c>>d;

// if(a>b && a>c && a>d){
//     cout<<0<<endl;
// }

// if(a<b &&a<c && a<d){
//     cout<<3<<endl;
// }

// if(a<b && a<c && a>d){
//     cout<<2<<endl;
// }
// if(a<b && a>c && a<d){
//     cout<<2<<endl;
// }
// if(a>b && a<c && a<d){
//     cout<<2<<endl;
// }

// if(a<b && a>c && a>d){
//     cout<<1<<endl;
// }
// if(a>b && a>c && a<d){
//     cout<<1<<endl;
// }
// if(a>b && a<c && a>d){
//     cout<<1<<endl;
// }






//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std; 

int main(){
    int t;
    cin>>t;


    while(t--){


   int a,b,c,d;
   cin>>a>>b>>c>>d;

   int timur=a;

   int arr[]={a,b,c,d};


   sort(arr,arr+4);

   for(int i=0;i<4;i++){
    if(arr[i]==timur){
        cout<<(3-i)<<endl;
    }
   }
















    }
    return 0;
}