#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	string s;
	while(cin>>n>>s){
		sort(s.begin(),s.end());
		cout<<(s=="Timru"?"YES":"NO")<<endl;
	}
}