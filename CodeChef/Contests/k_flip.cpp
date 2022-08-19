#include<bits/stdc++.h>
using namespace std; 
int a[200001],t,n,k;
char s[100001];

int main(){
    int t;
    cin>>t;

    while(t--){

        cin>>n>>k;

        t=0;

        for(int i=1;i<=n;++i){

            cin>>s[i];
        }

        for(int i=0;i<=2*n;++i){
            a[i]=0;
        }


        for(int i=1;i<=n-k+1;++i){
            if((s[i]+t)%2==1){
                t++;
                a[i+k-1]=1;
            }
            t-=a[i];
            s[i]=48;
        }

        for(int i=n-k+2;i<=n;++i){
            s[i]=48+(s[i]+t)%2;
            t-=a[i];
        }

        for(int i=1;i<=n;++i){
            putchar(s[i]);
            putchar('\n');
        }
    }
    return 0;
}