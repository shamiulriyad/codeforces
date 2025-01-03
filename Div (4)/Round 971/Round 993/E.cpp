#include <bits/stdc++.h>
using namespace std;

void solve_test_case(int k, int l1, int r1, int l2, int r2) {
    long long count = 0;

    for (int x = l1; x <= r1; ++x) {
        long long current = k;
        while (current <= r2) {
            if (current >= l2) {
                count++;
            }
            if (current > r2 / x) break;
            current *= x;
        }
    }

    cout << count << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;

        solve_test_case(k, l1, r1, l2, r2);
    }

    return 0;
}
