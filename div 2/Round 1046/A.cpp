#include <bits/stdc++.h>
using namespace std;

bool valid(int x, int y) {
    return max(x, y) <= 2 * (min(x, y) + 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        bool ok1 = valid(a, b);               // first half
        bool ok2 = valid(c - a, d - b);       // second half

        if (ok1 && ok2) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
