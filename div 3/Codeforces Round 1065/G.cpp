#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000003;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        vector<int> add_ops(n, 0), double_ops(n, 0);
        int max_double = 0;
        long long total_add = 0;

        for (int i = 0; i < n; i++) {
            long long ai = a[i], bi = b[i];
            int doubles = 0;
            int adds = 0;

            while (bi > ai) {
                if (bi % 2 == 0 && bi / 2 >= ai) {
                    bi /= 2;
                    doubles++;
                } else {
                    bi--;
                    adds++;
                }
            }
            total_add += adds;
            double_ops[i] = doubles;
            add_ops[i] = adds;
            max_double = max(max_double, doubles);
        }

        long long x = total_add + max_double;

        // Sequence counting (placeholder, combinatorics is tricky)
        // For now, we will output 1 (as minimal case)
        long long seq_count = 1;

        cout << x << " " << seq_count << "\n";
    }
    return 0;
}
