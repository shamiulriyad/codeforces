#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n + 1);

    if (k % 2 == 1) {
        for (int i = 1; i <= n; i++) {
            a[i] = (i % n) + 1;
        }
    } else {
        for (int i = 1; i <= n; i++) {
            if (i % 2 == 1 && i < n) 
                a[i] = i + 1;
            else 
                a[i] = i - 1;
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
