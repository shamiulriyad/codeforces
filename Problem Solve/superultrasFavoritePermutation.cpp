#include <bits/stdc++.h>
using namespace std;

void solve(int tc)
{
    int n;
    cin >> n;
    if (n <= 4) {
        cout << -1;
    } else {
        for (int i = 1; i <= n; i += 2) {
            if (i == 5) continue;
            cout << i << " ";
        }
        cout << "5 4 ";
        for (int i = 2; i <= n; i += 2) {
            if (i == 4) continue;
            cout << i << " ";
        }
    }
    cout << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int tc, tt = 1;
    cin >> tt;

    for (tc = 1; tc <= tt; tc++) {
        solve(tc);
        cout << endl;
    }

    return 0;
}
