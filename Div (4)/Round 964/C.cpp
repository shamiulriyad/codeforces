#include<bits/stdc++.h>
using namespace std;
int T,n,s,m,l,r,maxn;
int main(){
	cin>>T;
	while(T--){
		cin>>n>>s>>m;r=maxn=0;
		for(int i=1;i<=n;i++){
			cin>>l;
			maxn=max(maxn,l-r);
			cin>>r;
		}
		maxn=max(m-r,maxn);
		if(maxn>=s)cout<<"Yes\n";
		else cout<<"No\n";
	}
}