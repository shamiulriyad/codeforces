#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		long long ans=1,a[n];
		for(int i=0;i<n;i++)cin>>a[i];
		sort(a,a+n);
		a[0]++;
		for(int i=0;i<n;i++)ans*=a[i];
		cout<<ans<<"\n";
	}
}