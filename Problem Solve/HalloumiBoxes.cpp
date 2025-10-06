#include <bits/stdc++.h>
using namespace std;



void solve(int tc) {
     int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    if(k >= n) {
        cout << "YES\n";
        return;
    }

    if(k == 1) {
        if (is_sorted(a.begin(), a.end())) cout << "YES\n";
        else cout << "NO\n";
        return;
    }

    cout << "YES\n";
}

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tt;
    cin >> tt;
    for(int tc = 1; tc <= tt; tc++) {
        solve(tc);
        cout << endl;
    }
    return 0;
}
