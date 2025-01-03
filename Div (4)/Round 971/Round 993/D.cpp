#include <bits/stdc++.h>
using namespace std;

void solve_test_case(int n, const vector<int>& a) {
    vector<int> b(n);
    unordered_map<int, int> freq;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    for (int i = 0; i < n; i++) {
        freq[a[i]]++;
    }

    for (auto& [num, count] : freq) {
        pq.push({count, num});
    }

    for (int i = 0; i < n; i++) {
        auto [count, num] = pq.top();
        pq.pop();
        b[i] = num;
        if (--count > 0) {
            pq.push({count, num});
        }
    }

    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        solve_test_case(n, a);
    }

    return 0;
}