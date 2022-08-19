// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n,m;
//     cin>>n>>m;

//     int arr[m];

//     for(int i=0;i<m;i++){
//         cin>>arr[i];
//     }
//     int sum=arr[0]-1;

//   for(int i=1;i<=m;i++){

//    if(arr[i+1]<arr[i]){
//     sum+=(n-(arr[i+1]-arr[i]));

//    }
//    else if(arr[i+1]==arr[i]){
//     sum+=n;
//    }

//    else{
//     sum+=arr[i+1]-arr[i];
//    }

//   }

//   cout<<sum<<endl;
//     return 0;
// }
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int arr[b];
    for (int i = 0; i < b; i++)
    {
        cin >> arr[i];
    }
    long long int count = arr[0] - 1;
    for (int i = 0; i < b - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            count += a - (arr[i] - arr[i + 1]);
        }
        else if (arr[i] < arr[i + 1])
        {
            count += arr[i + 1] - arr[i];
        }
    }
    cout << count;
}