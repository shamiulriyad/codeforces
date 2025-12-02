#include <bits/stdc++.h>
using namespace std;

long long max_subarray_sum(vector<long long>& arr) {
    long long max_ending_here = arr[0];
    long long max_so_far = arr[0];
    for (size_t i = 1; i < arr.size(); i++) {
        max_ending_here = max(arr[i], max_ending_here + arr[i]);
        max_so_far = max(max_so_far, max_ending_here);
    }
    return max_so_far;
}

void solve() {
    int n, k;
    cin >> n >> k;
    vector<long long> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    
    long long initial_max = max_subarray_sum(a);
    
    if (k == 0) {
        cout << initial_max << "\n";
        return;
    }
    
    if (k % 2 == 1) {
        // Alice's extra move: try adding b[i] to each a[i]
        long long best = initial_max;
        for (int i = 0; i < n; i++) {
            long long old = a[i];
            a[i] += b[i];
            best = max(best, max_subarray_sum(a));
            a[i] = old;
        }
        cout << best << "\n";
    } else {
        // Bob's last move: try subtracting b[i] from each a[i]
        long long best = initial_max;
        for (int i = 0; i < n; i++) {
            long long old = a[i];
            a[i] -= b[i];
            best = min(best, max_subarray_sum(a));
            a[i] = old;
        }
        cout << best << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}