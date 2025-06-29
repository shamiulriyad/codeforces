#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        a %= b;
        swap(a, b);
    }
    return a;
}

long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b;
}

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<long long> nx(n);
        for(int i = 0; i < n; i++) {
            cin >> nx[i];
        }

        long long re= nx[0];
        for(int i = 1; i < n;i++) {
            result = lcm(re, nx[i]);
        }
        cout << re << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
