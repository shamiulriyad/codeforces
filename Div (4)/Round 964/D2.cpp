#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
	cin>>t;
	while(t--){
		string s1,s2;
		cin>>s1>>s2;
		int p=0,len=s2.size();
		for(int i=1;i<=s1.size();i++)s2+="a";
		for(int i=0;i<s1.size();i++)if(s1[i]=='?'||s1[i]==s2[p])s1[i]=s2[p],p++;
		if(p>=len)cout<<"YES\n"<<s1<<"\n";
		else cout<<"NO\n";
	}
	return 0;
}