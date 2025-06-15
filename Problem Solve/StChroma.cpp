#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(int tc)
{
    int n, x;
    cin >> n >> x;
 
    if (n == 1)
    {
        cout << 0 << '\n';
        return;
    }
 
    for (int i = 0; i < n; i++)
    {
        if (i != x)
            cout << i << ' ';
    }
    
    if (x < n)
        cout << x << '\n';
    else
        cout << '\n';
   
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