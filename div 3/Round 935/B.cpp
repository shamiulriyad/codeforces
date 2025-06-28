#include <bits/stdc++.h>
using namespace std;

void solve(int tc)
{
    long long t,a,b,m;
    cin>>a>>b>>m;
cout<<((m/a)+(m/b)+2)<<endl;
   
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