#include <bits/stdc++.h>
using namespace std;

void solve(int tc)
{
    int a,b,c;
    cin >>a>>b>>c;
    int t=a+b+c;
    if(t%3!=0){
        cout << "NO";
        return;
    }
    int d=t/3;
    if(a<=d&&b<=d&&c>=d) cout << "YES";
    else cout << "NO";
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
