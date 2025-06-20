#include <bits/stdc++.h>
using namespace std;
int T,n,k;
string s,t;
bool flg=0;

void solve(int tc)
{
    cin>>n>>k>>s;t=s;
		reverse(t.begin(),t.end());flg=0;
		for(int i=1;i<n;i++)if(s[i]!=s[i-1]&&k)flg=1;
		if(s<t||flg)cout<<"YES\n";
		else cout<<"NO\n";
   
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
