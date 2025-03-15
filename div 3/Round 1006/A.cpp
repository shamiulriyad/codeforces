#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, p;
        cin >> n >> k >> p;
        
        vector<int> a(n);
        int sum = 0;
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        
        int diff = k - sum;
        
        if (diff == 0) {
            cout << 0 << endl;
            continue;
        }
        
        if (diff % p != 0 || abs(diff) > n * p) {
            cout << -1 << endl;
            continue;
        }
        
        cout << abs(diff) / p << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
