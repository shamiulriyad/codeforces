#include <bits/stdc++.h>
using namespace std;

void solve(int tc)
{
    string s;
		cin>>s;
		int cnt[2]={0,0},ans=0;
		for(char c:s)++cnt[c-'0'];
		for(char c:s)if(!cnt[(c-'0')^1]--)cout<<s.size()-ans<<"\n";
		else ++ans;
		if(ans==s.size())cout<<0<<"\n";
   
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
