#include <bits/stdc++.h>
using namespace std;

void solve(int tc)
{
   int b,c;cin>>b>>c;
		vector<int>d(b);
		for(int i=0;i<b;i++)cin>>d[i];
		int e=d[0],f=d[b-1];
		cout<<min(abs(c-e),abs(c-f))+(f-e)<<'\n';
   
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

