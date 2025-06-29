#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        a %= b;
        swap(a, b);
    }
    return a;
}
void solve() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b);
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    cout << endl;

    return 0;
}
