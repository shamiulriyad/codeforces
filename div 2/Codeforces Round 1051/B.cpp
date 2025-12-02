#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll t,n,k;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		vector<ll>a(3*n),b(3*k);
		for(ll i=1;i<=n;i++)
			cin>>a[i];
		for(ll i=1;i<=k;i++)
			cin>>b[i];
		
		sort(a.begin()+1,a.begin()+1+n,greater<ll>());
		sort(b.begin()+1,b.begin()+1+k);
		ll cnt=0;
		for(ll i=1;i<=k;i++)
		{
			a[cnt+b[i]]=0;
			cnt+=b[i];
			if(cnt>=n)break;
		}
		ll ans=0;
		for(ll i=1;i<=n;i++)
			ans+=a[i];
		cout<<ans<<endl;
	}
}