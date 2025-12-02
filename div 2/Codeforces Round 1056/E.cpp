#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int T,n,m,k,t[N]; 
signed main(){
	cin>>T;
	while(T--){
		memset(t,0,sizeof(t));
		cin>>n>>m>>k;
		bool f=0;
		for(int i=1,x,y;i<=k;i++){
			cin>>x>>y;t[y]++;
		}
		if(n==1){
			cout<<(t[2]&1?"Mimo\n":"Yuyu\n");
			continue;
		}
		for(int i=2;i<=m;i++)if(t[i]&1){
			cout<<"Mimo\n";f=1;
			break;
		}
		if(!f)cout<<"Yuyu\n";
	}
} 