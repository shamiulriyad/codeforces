#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[200005];
void test()
{
	int n,cnt=0,s=0;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i],cnt+=(a[i]==0),s+=a[i];
	if(cnt==1)
		for(int i=1;i<=n;i++)
			if(!a[i])
				a[i]=n*(n+1)/2-s;
	int p=1,q=n;
	while(p<=n&&a[p]==p)
		p++;
	while(q<=n&&a[q]==q)
		q--; 
	cout<<max(q-p+1,0ll)<<"\n";
}
signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
		test();
}