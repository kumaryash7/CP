#include<iostream>
#include<string>
#include<algorithm>
#include<cstring>
#include<utility>
#include<stack>
#include<vector>
#include<math.h>
#include<map>
#include<queue>	
using namespace std;
int t;
int a[27];     //记录字符的总数
int main() {
    ios::sync_with_stdio(false);	
	cin >> t;
	while (t--)
	{
		string w;
		int p;
		string ans="";
		cin >> w>>p;
		int zong = 0;
		memset(a, 0, sizeof(a));
		for (int i = 0; i < w.size(); i++)
		{
			int q = w[i] - 'a' + 1;
			zong += q;
			a[q]++;
		}
		if (zong <= p)cout << w << endl;
		else {
			int cha = zong - p;
			for (int i = 26; i >= 1; i--)   //贪心获得最长的字符串，应该先删除值大的字符
			{                                //同时将字符的数量从a[]中减去
				if (cha <= 0)break;
				int k = cha / i;
				if (k >= a[i]) {
					cha -= a[i] * i;
					a[i] = 0;
				}
				else {
					if(cha%i!=0)
						k = k + 1;
					a[i]=a[i] - k;
					cha -= i * k;
				}
			}
			for (int i = 0; i < w.size(); i++)      
			{
				int q = w[i] - 'a' + 1;
				if (a[q]) {
					ans += w[i];
					a[q]--;
				}
			}
			cout << ans << endl;
		}
	}
	return 0;
}