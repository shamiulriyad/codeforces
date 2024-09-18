#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
char c;
string s="codeforces";
	cin>>t;
	while(t--){
		cin>>c;
		if(s.find(c)!=-1)
            cout<<"YES"<<'\n';
		else cout<<"NO"<<'\n';
	}
	return 0;
}