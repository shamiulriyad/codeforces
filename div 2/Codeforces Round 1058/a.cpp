#include<bits/stdc++.h>
using namespace std;


void solve(){
	int n;cin>> n;
	vector<int>a(n+1,0);
	for(int i=1;i<=n;i++)cin>> a[i];
	for(int i=0;i<102;i++){
		int f = 1;
		for(int j=1;j<=n;j++){
			if(a[j]==i)f = 0;
		}
		if(f){
			cout<<i<<endl;return;
		}
	}
}

int main(){
	int _;cin>>_;
	while(_--)solve();
	
	
}