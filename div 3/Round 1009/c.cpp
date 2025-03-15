#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> x(n), r(n);
    for (int i = 0; i < n; i++) cin >> x[i]; // Read circle centers
    for (int i = 0; i < n; i++) cin >> r[i]; // Read radii

    set<pair<int, int>> valid_points; // To avoid duplicate points

    for (int i = 0; i < n; i++) {
        int cx = x[i], radius = r[i];
        
        for (int dx = -radius; dx <= radius; dx++) { // Iterate over x-range
            int px = cx + dx;
            int max_y = sqrt(radius * radius - dx * dx); // Calculate max valid y
            
            for (int py = -max_y; py <= max_y; py++) { // Iterate over valid y-values
                valid_points.insert({px, py}); // Store unique points
            }
        }
    }

    cout << valid_points.size() << "\n"; // Output the count of unique points
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
