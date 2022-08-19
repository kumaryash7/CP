// #include<bits/stdc++.h>
// using namespace std; 

// int main(){
//     int t;
//     cin>>t;

//     while(t--){



//   int n;
//   cin>>n;
//   int arr[n];

//   for(int i=0;i<n;i++){
//     cin>>arr[i];
//   }
// int count=0;
//   for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         if(i<j && arr[j]-arr[i]==j-i){
// count++;
//         }
//     }
//   }


// cout<<count<<endl;

//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
// BRUTE FORCE APPROACH --> COMPLEXITY--> O(n2)
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j] && i < j)
            {
                count++;
            }
        }
    }
    cout << count << endl;

    return 0;
}