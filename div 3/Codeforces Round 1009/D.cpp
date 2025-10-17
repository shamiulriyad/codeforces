#include<bits/stdc++.h>
#define int long long
using namespace std;
int x[200010],r[200010];
signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		map<int ,int>a;
		for(int i=1;i<=n;i++) cin>>x[i];
		for(int i=1;i<=n;i++) cin>>r[i];
		for(int i=1;i<=n;i++)
		{
			for(int j=x[i]-r[i];j<=x[i]+r[i];j++)
			{
				if(!a.count(j)) a[j]=0;
				a[j]=max((int)(2*((int)sqrt((r[i])*r[i]-(j-x[i])*(j-x[i])))+1),a[j]);
			}
		}
		int sum=0;
		for(auto i:a)
		{
			sum+=i.second;
		}
		cout<<sum<<'\n';
	}
	return 0;
}