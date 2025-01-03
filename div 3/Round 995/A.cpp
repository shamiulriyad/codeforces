#include<bits/stdc++.h>
using namespace std;
int a[105];
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=1;i<=n;i++)cin>>a[i];
		for(int i=0,b;i<n;i++)cin>>b,a[n]+=max(0,a[i]-b);
		cout<<a[n]<<'\n';
	}
}