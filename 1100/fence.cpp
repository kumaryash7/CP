// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, k;
//     cin >> n >> k;

//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int sum[n];

//     for (int i = 0; i < n; i++)
//     {
//   for(int j=0;j<k;k++){
       
//         sum[i]+=arr[i+j] ;
//   }
//     }

//     int min = sum[0];
//     int ans=0;

//     for (int i = 0; i < n; i++)
//     {
//         if (sum[i] < min)
//         {
//             min = sum[i];
//             ans=i;
//         }
//     }
//     cout << ans+1 << endl;

//     return 0;
// }

#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int  n,k;
	cin>>n>>k;
	long long arr[n+8]={0};
  // input + cumlative sum 
	for(int  i=0;i<n;i++){
		cin>>arr[i];
		if(i){
			arr[i]=arr[i-1]+arr[i];
		}
	}
	
 
	int min=150000010;
	   long long  minindex=0;
	for(int i=0;i<=n-k;i++){
		 	long long sum=0;
		if(!i){
			sum=arr[i+k-1];
 			if(sum<=min){
				min=sum;
				minindex=i;
			}
			
		}
		else {
			sum=arr[i+k-1]-arr[i-1];
 
			if(sum<=min){
				min=sum;
				minindex=i;
			}
		}
		
	
	}
	cout<<++minindex<<endl; 
	return 0;
}