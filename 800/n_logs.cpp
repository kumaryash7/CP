#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n;
        cin>>n;
        int data1[n];
        for(int i=0;i<n;i++)
        {
            cin>>data1[i];
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+data1[i];
        }
        sum=sum-n;
        if(sum%2==1)
        {
            cout<<"errorgorn"<<endl;
        }
        else
        {
            cout<<"maomao90"<<endl;
        }
        t--;
    }
    return 0;
}