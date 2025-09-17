#include <bits/stdc++.h>
using namespace std;

void solve(int tc)
{
       int n;
        cin >> n;
        vector<int>p(n);
        for(int i = 0;i<n;i++) cin >> p[i];




        vector<int> pos(n + 1);
        for(int i = 0;i<n;i++) pos[p[i]]=i;

        int left = pos[n], right = pos[n];
        bool ok = true;

        for(int cur = n;cur>=1;cur--) {
            int ami= pos[cur];
            left = min(left,ami);
            right = max(right,ami);
            if(right-left+1!=n-cur+1){
                ok = false;
                break;
            }






        }






        cout << (ok ? "YES\n" : "NO\n");
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
