#include<bits/stdc++.h>
using namespace std; 
int binarySearch(int arr[],int n,int key){


 int s=0;
 int e=n;

 int mid=(s+e)/2;


 while(s<=e){


    if(key==mid){
        return mid;
    }

    else if(key<mid){
        e=mid-1;
    }

    else if(key>mid){
        s=mid+1;
    }

    



 }
 return -1;

}
int main(){
    int arr[5]={1,20,30,40,50};
    cout<<binarySearch(arr,5,30);
    return 0;
}