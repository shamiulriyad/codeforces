#include <bits/stdc++.h>
using namespace std;

void solve(int tc){
        int n, x;
        cin >> n >> x;
        vector<int> doors(n);
        for(int i=0;i<n;i++) {
            cin >>doors[i];
        }
        int f=-1,la =-1;
        for (int i = 0; i < n; ++i) {
            if (doors[i]==1) {
                if (f== -1) {
                    f=i;
                }
                la=i;
            }
        }
        if (la - f + 1 <= x) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int tc, tt = 1;
    cin >> tt;

    for(tc = 1; tc <= tt; tc++)
    {
        solve(tc);
       // cout << endl;
    }

    return 0;
}
