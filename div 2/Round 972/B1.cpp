#include <bits/stdc++.h>
using namespace std;

void solve(int tc)
{
    int n,m,q;cin>>n>>m>>q;
		int x,y,z;cin>>x>>y>>z;
		if(x>y)swap(x,y);
		if(z<x)cout<<x-1<<endl;
		else if(z>y)cout<<n-y<<endl;
		else cout<<(y-x)/2<<endl;

   
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
