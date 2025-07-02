#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        vector<int> prefixMin(n), suffixMax(n);

        // Compute prefix minimums
        prefixMin[0] = a[0];
        for (int i = 1; i < n; i++) {
            prefixMin[i] = min(prefixMin[i-1], a[i]);
        }

        // Compute suffix maximums
        suffixMax[n-1] = a[n-1];
        for (int i = n-2; i >= 0; i--) {
            suffixMax[i] = max(suffixMax[i+1], a[i]);
        }

        string result(n, '0');
        for (int i = 0; i < n; i++) {
            if (a[i] == prefixMin[i] && a[i] == suffixMax[i]) {
                result[i] = '1';
            }
        }

        cout << result << "\n";
    }

    return 0;
}
