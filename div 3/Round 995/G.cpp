#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,q,h[25],m[25],t[25],d[25][25],dp[(1<<21)+5][21];
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n>>q;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++) d[i][j]=1;
	while(q--){
		int x;
		char op;
		cin>>x>>op;
		if(op=='+'){
			h[x]++;
			m[x]=max(m[x],h[x]);
			for(int i=1;i<=n;i++) d[x][i]=max(d[x][i],h[x]+1-t[i]);
		}
		else t[x]++;
	}
	memset(dp,0x3f,sizeof(dp));
	for(int i=1;i<=n;i++) dp[1<<(i-1)][i]=1;
	for(int msk=1;msk<(1<<n);msk++)
		for(int j=1;j<=n;j++)
			for(int k=1;k<=n;k++)
				if(((msk>>(j-1))&1)&&((msk>>(k-1))&1)&&j!=k)
					dp[msk][j]=min(dp[msk][j],dp[msk^(1<<(j-1))][k]+d[k][j]);
	int ans=1e17;
	for(int i=1;i<=n;i++) ans=min(ans,dp[(1<<n)-1][i]+m[i]);
	cout<<ans;
	return 0;
}