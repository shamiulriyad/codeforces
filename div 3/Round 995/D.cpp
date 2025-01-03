#include<bits/stdc++.h>
using namespace std;
long long a[200005];
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		long long x,y,sum=0,ans=0;
		cin>>n>>x>>y;
		for(int i=0;i<n;i++)cin>>a[i],sum+=a[i];
		a[n]=1e14;
		sort(a,a+n);
		for(int i=n-1,j=0,k=0;i>=0;i--){
			while(a[j]+a[i]<sum-y)j++;
			while(a[k]+a[i]<=sum-x)k++;
			ans+=min(k,i)-min(j,i);
		}
		cout<<ans<<'\n';
	}
}