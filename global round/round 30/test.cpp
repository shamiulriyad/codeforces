#include <bits/stdc++.h>
using namespace std;

pair<int, vector<string>> transform_string(int n, int kmax, string s, string t) {
    if (s == t) return {0, {}};
    
    vector<string> operations;
    string current = s;

    for (int op = 0; op < kmax; op++) {
        string next_s = "";
        next_s += current[0];
        bool changed = false;

        for (int i = 1; i < n; i++) {
            // Choose the character to match t[i] if possible
            if (t[i] == current[i] || t[i] == current[i-1])
                next_s += t[i];
            else
                next_s += current[i];

            if (next_s[i] != current[i])
                changed = true;
        }

        operations.push_back(next_s);
        current = next_s;

        if (current == t) {
            return {operations.size(), operations};
        }
    }

    return {-1, {}};
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--) {
        int n, kmax;
        cin >> n >> kmax;
        string s, t;
        cin >> s >> t;

        auto result = transform_string(n, kmax, s, t);
        int k = result.first;
        vector<string> ops = result.second;

        if (k == -1) {
            cout << -1 << "\n";
        } else {
            cout << k << "\n";
            for (auto &op : ops) {
                cout << op << "\n";
            }
        }
    }

    return 0;
}
