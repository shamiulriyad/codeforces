#include <bits/stdc++.h>
using namespace std;

void solve(int tc)
{
    int n;
    cin >> n;
    vector<long long> a(n);
    long long sum = 0;
    long long mnOdd = LLONG_MAX;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        if (a[i] % 2 == 1) {
            mnOdd = min(mnOdd, a[i]); 
        }
    }

    if (sum % 2 == 0) {
        cout << sum << "\n";
    } else {
        cout << sum - mnOdd << "\n";
    }

   
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int tc, tt = 1;
   // cin >> tt;

    for(tc = 1; tc <= tt; tc++)
    {
        solve(tc);
        
        cout << endl;
    }

    return 0;
}
