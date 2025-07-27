#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll MOD = 1e9 + 7, BASE = 31;

int main() {
    string s, p;
    cin >> s >> p;
    int n = s.size(), m = p.size();
    if(m > n) return cout << 0, 0;

    ll p_hash = 0, cur_hash = 0, power = 1;
    for(int i = 0; i < m; ++i) {
        p_hash = (p_hash * BASE + (p[i] - 'a' + 1)) % MOD;
        cur_hash = (cur_hash * BASE + (s[i] - 'a' + 1)) % MOD;
        if(i < m - 1) power = (power * BASE) % MOD;
    }

    int count = 0;
    if(cur_hash == p_hash) {
        bool match = true;
        for(int j = 0; j < m; ++j) {
            if(s[j] != p[j]) {
                match = false;
                break;
            }
        }
        if(match) count++;
    }

    for(int i = m; i < n; ++i) {
        cur_hash = (cur_hash - (s[i - m] - 'a' + 1) * power % MOD + MOD) % MOD;
        cur_hash = (cur_hash * BASE + (s[i] - 'a' + 1)) % MOD;

        if(cur_hash == p_hash) {
            bool match = true;
            for(int j = 0; j < m; ++j) {
                if(s[i - m + 1 + j] != p[j]) {
                    match = false;
                    break;
                }
            }
            if(match) count++;
        }
    }

    cout << count << endl;
}
