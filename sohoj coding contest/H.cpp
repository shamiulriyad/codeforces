#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b;
    cin >> a>>b;
    int q;
    cin >> q;

    while (q--) {
        int l, r;
        cin >> l >> r;
        int ans = -1;
        for (int i = 1; i * i <= a; i++) {
            if (a % i != 0) continue;
            if (b % i == 0 && i >= l && i <= r) {
                ans = max(ans, i);
            }
            int my = a / i;
            if (my != i && b % my == 0 && my >= l && my <= r) {
                ans = max(ans, my);
            }
        }
    cout << ans << "\n";
    }
   
}
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    cout << endl;

    return 0;
}


