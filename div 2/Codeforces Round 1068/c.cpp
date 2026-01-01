#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    long long k;
    cin >> n >> k;
    vector<long long> a(n);
    set<long long> s;

    for(int i=0;i<n;i++){
        cin >> a[i];
        s.insert(a[i]);
    }

    vector<long long> allowed;
    long long mx = *s.rbegin();

    // Step 1: find allowed divisors
    for(auto x : s){
        if(x > k) continue;
        bool ok = true;
        for(auto y : s){
            if(y % x != 0){
                ok = false;
                break;
            }
        }
        if(ok) allowed.push_back(x);
    }

    if(allowed.empty()){
        cout << "-1\n";
        return;
    }

    // Step 2: choose minimal set greedily
    vector<long long> chosen;
    set<long long> covered;
    vector<long long> allowed_sorted = allowed;
    sort(allowed_sorted.rbegin(), allowed_sorted.rend()); // largest first

    for(auto val : s){
        if(covered.count(val)) continue;

        long long best = -1;
        for(auto x : allowed_sorted){
            if(val % x == 0){
                best = x;
                break;
            }
        }

        if(best == -1){
            cout << "-1\n";
            return;
        }

        chosen.push_back(best);

        // mark all multiples of best in s as covered
        for(auto y : s){
            if(y % best == 0) covered.insert(y);
        }
    }

    cout << chosen.size() << "\n";
    for(auto x : chosen) cout << x << " ";
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
