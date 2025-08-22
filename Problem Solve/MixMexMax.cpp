#include<bits/stdc++.h>
using namespace std;
int a[101],n,t;
set<int>s;
int main(){
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	for(cin>>t;t;t--){
		cin>>n;
		s.clear();
		for(int i=1;i<=n;i++){
			cin>>a[i];
			s.insert(a[i]);
		}
		s.erase(-1);
		cout<<(s.size()<=1&&s.find(0)==s.end()?"YES\n":"NO\n");
	}
	return 0;
}