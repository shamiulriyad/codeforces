#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while(b != 0) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int lcm(int a, int b) {
    return (a /gcd(a, b)) * b;
}
void solve() {
    int a, b;
    cin >> a >> b;
    cout << lcm(a, b);
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    cout << endl;

    return 0;
}
