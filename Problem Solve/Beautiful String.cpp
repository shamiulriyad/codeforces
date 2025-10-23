#include <bits/stdc++.h>
using namespace std;
int T;

void solve()
{
	int n;
	string s;
	cin>>n>>s;
	vector<int> a;
	for(int i=1;i<=n;i++)
	{
		if(s[i-1]=='0') a.push_back(i);
	}
	cout<<a.size()<<endl;
	for(int i=1;i<=a.size();i++)
	{
		cout<<a[i-1]<<" ";
	}
	cout<<endl;
}

int main()
{
	cin>>T;
	while(T--) solve();
	return 0;
}