#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int n;
        cin >> n; // Number of haystacks
        
        vector<pair<int, int>> haystacks(n); // {a, b} pairs
        long long total_hay = 0, total_limit = 0;

        for (int i = 0; i < n; i++) {
            cin >> haystacks[i].first >> haystacks[i].second;
            total_hay += haystacks[i].first;
            total_limit += haystacks[i].second;
        }

        // If total hay exceeds the total limit, it's impossible
        if (total_hay > total_limit) {
            cout << -1 << endl;
            continue;
        }

        // Sort haystacks by their height limits (b_i) in ascending order
        sort(haystacks.begin(), haystacks.end(), [](pair<int, int>& x, pair<int, int>& y) {
            return x.second < y.second;
        });

        long long moves = 0;
        long long remaining_hay = 0; // Tracks surplus haybales to redistribute

        // Process each haystack
        for (auto& [a, b] : haystacks) {
            if (a <= b) {
                // This haystack can be emptied directly
                moves += a;
                remaining_hay += (b - a);
            } else {
                // Not enough space in this haystack, redistribute
                moves += b; // Fill it to its limit
                remaining_hay -= (a - b); // Use surplus to offset
            }
        }

        cout << moves << endl; // Output the minimum moves
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
