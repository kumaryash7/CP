// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n,a,b,c;

//     cin>>n>>a>>b>>c;

//    int count1=0;
//    int count2=0;
//    int count3=0;

//    if(a+b+c==n){
//    count1=3;

//    }

//   else if(a+b==n || b+c == n || a+c ==n){
//     count2=2;
//    }

//    else{
//     count3=1;
//    }

//    cout<<max(count1,max(count2,count3));

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int i, j, a, b, c, n, k, ans, rem;
    while (cin >> n >> a >> b >> c)
    {
        ans = 0;
        for (i = 0; i * a <= n; ++i)
        {
            for (j = 0; i * a + j * b <= n; ++j)
            {
                rem = n - i * a - j * b;
                if (rem % c == 0)
                {
                    k = rem / c;
                    ans = max(ans, i + j + k);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}