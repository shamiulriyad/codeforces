#include <bits/stdc++.h>
using namespace std;

void solve(int tc){
  
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        bool found = false;

        for(int i = 0; i < n - 1 && !found; i++) {
            long long b = a[i];
            long long c = -1;
            for(int j = i + 1; j < n; j++) {
                long long d = a[j];
                long long rem = d % b;
                if(rem != 0 && rem % 2 == 0) {
                    c = d;
                }
            }
            if(c != -1) {
                cout << b << " " << c << "\n";
                found = true;
                break;
            }
        }

        if(!found) cout << -1 << "\n";

}
signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int tc, tt = 1;
    cin >> tt;

    for(tc = 1; tc <= tt; tc++)
    {
        solve(tc);
        
        cout << endl;
    }

    return 0;
}

