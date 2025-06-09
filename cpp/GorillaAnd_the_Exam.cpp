#include <bits/stdc++.h>
using namespace std;
map<int,int>mp;


void solve(int tc)
{
      long long n,m;
		cin>>n>>m;
		mp.clear();
		for(int i=1;i<=n;i++){
			int a;
			cin>>a;
			mp[a]++;
		}
		multiset<int>st;
		for(auto b:mp)
			st.insert(b.second);
		int ans=st.size();
		for(int a:st){
			if(m>=a)ans--,m-=a;
		}cout<<max(1,ans)<<'\n';
}
signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int tc, tt = 1;
    cin >> tt;

    for(tc = 1; tc <= tt; tc++)
    {
        solve(tc);
        cout << endl;
    }

    return 0;
}
