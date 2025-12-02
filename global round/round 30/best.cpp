#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        bool found = false;

        for(int i = 0; i < n - 1 && !found; i++) {
            long long b = a[i];
            for(int j = n - 1; j > i; j--) {
                long long d = a[j];
                long long rem = d % b;
                if(rem != 0 && rem % 2 == 0) {
                    cout << b << " " << d << "\n";
                    found = true;
                    break;
                }
            }
        }

        if(!found) cout << -1 << "\n";
    }

    return 0;
}
