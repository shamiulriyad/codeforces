#include <bits/stdc++.h>
using namespace std;

void solve(int tc)
{
    int n;
    long long k;
    cin >> n >> k;

    unordered_map<long long, long long> freqS, freqT;

    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        freqS[x % k]++; // store count by remainder
    }

    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        freqT[x % k]++; // store count by remainder
    }

    // Compare remainder frequencies
    bool ok = (freqS == freqT);

    cout << (ok ? "YES" : "NO");
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int tc, tt = 1;
    cin >> tt;

    for (tc = 1; tc <= tt; tc++) {
        solve(tc);
        cout << "\n";
    }

    return 0;
}
