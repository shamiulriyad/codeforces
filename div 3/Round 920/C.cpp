#include <bits/stdc++.h>
using namespace std;
using ll= long long;

void solve(int tc)
{
   ll n, f, a, b;
        cin >> n >> f >> a >> b;

        vector<ll> v(n + 5);
        for(int i = 1; i <= n; i++) {
            cin >> v[i];
        }
        bool ok = true;
        for(int i = 0; i < n; i++) {
            ll x = abs(v[i] - v[i + 1]) * a;
            ll mn = min(x, b);
            if (f > mn) {
                f -= mn;
            } else {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
   
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