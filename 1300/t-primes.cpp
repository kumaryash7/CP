#include <bits/stdc++.h>
using namespace std;
int binary_search(int arr[], int n, int key)
{

  int s = 0;

  int e = n;
  while (s <= e)
  {
    int mid = (s + e) / 2;
    if (arr[mid] == key)
    {
      return mid;
    }
    else if (arr[mid] > key)
    {
      e = mid - 1;
    }
    else
    {
      s = mid + 1;
    }
  }
  return -1;
}

int main()
{
  int n;
  cin >> n;

  int arr[n];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int count=0;

  bool answer[n] = {0};
  for(int i=0;i<n;i++){

    for(int j=1;j<=arr[i];j++){
      if(arr[i]%j==0){
        count++;
      }
    }  


  if(count==3){
    answer[i]=1;

  }
  }

for(int i=0;i<n;i++){
 if(answer[i]==1){
  cout<<"YES"<<endl;

 }
 else{
  cout<<"NO"<<endl;
 }
}
  return 0;
}