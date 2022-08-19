// #include<bits/stdc++.h>
// using namespace std; 

// int main(){
//     int n;
//     cin>>n;

  
//    string s[n];

//    for(int i=0;i<n;i++){
//     cin>>s[i];
//    }
// bool flag =false;
// string team1;
//  int count1=0;

// string team2;
// int count2=0;
// string only_team;

// for(int i=0;i<n;i++){
//     if(s[i]!=s[i+1]){
//         team1=s[i];
//         team2=s[i+1];

//     }
// }

// for(int i=0;i<n;i++){

//     if(s[i]==team1){
//     count1++;
//     }
//     else if(s[i]==team2){
//         count2++;
//     }
// }

   

//  if(flag==true){
//     cout<<s[0]<<endl;
//  }   

// else if(count1>count2){
//     cout<<team1<<endl;
// }

// else{
//     cout<<team2<<endl;
// }
//     return 0;
// }
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, goal(0);
    cin >> n;

    string team, win;
    while (n--)
    {
        if (goal != 0)
        {
            cin >> team;
            if (team == win)
            {
                goal += 1;
            }
            else
            {
                goal -= 1;
            }
        }
        else
        {
            cin >> win;
            goal = 1;
        }
    }
    cout << win << endl;
    return 0;
}