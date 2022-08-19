#include<bits/stdc++.h>
using namespace std; 
int distinct_elements(string s){
   // Sorting the array
   sort(s.begin(), s.end());
   // Traverse the sorted array
   int count = 0;
   for (int i = 0; i < s.length(); i++){
      // Moving the index when duplicate is found
      while (i < s.length() - 1 && s[i] == s[i + 1]){
         i++;
      }
      count++;
   }
   return count;
}
int main(){
    string s;


    cin>>s;

    if(distinct_elements(s)%2 ==0){
        cout<<"CHAT WITH HER !"<<endl;
    }
    else{
        cout<<"IGNORE HIM !"<<endl;

    }
    return 0;
}