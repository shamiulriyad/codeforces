#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define int long long

int modpow(int x, int y) {
    int res = 1;
    x %= MOD;
    while (y) {
        if (y & 1) res = res * x % MOD;
        x = x * x % MOD;
        y >>= 1;
    }
    return res;
}
int factorial(int n) {
    int res = 1;
    for (int i = 1; i <= n; i++) {
        res = res * i % MOD;
    }
    return res;
}
int binomial(int a, int b) {
    if (b < 0 || b > a) return 0;
    int fa = factorial(a);
    int fb = factorial(b);
    int fab = factorial(a - b);
    return fa * modpow(fb, MOD - 2) % MOD * modpow(fab, MOD - 2) % MOD;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    while (n--) {
        int a, b;
        cin >> a >> b;
        cout << binomial(a, b) << "\n";
    }
    return 0;
}
