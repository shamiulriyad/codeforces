#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> x(n), r(n);

    for (int i = 0; i < n; i++) cin >> x[i];
    for (int i = 0; i < n; i++) cin >> r[i];

    set<pair<int, int>> p;

    for (int i = 0; i < n; i++) {
        for (int a = x[i] - r[i]; a <= x[i] + r[i]; a++) {
            int b = sqrt(r[i] * r[i] - (a - x[i]) * (a - x[i]));

            for (int c = -b; c <= b; c++) {
                p.insert({a, c});
            }
        }
    }
    cout << p.size() << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
