#include <bits/stdc++.h>
using namespace std;

void solve(int tc)
{


        int n, m;
        cin >> n >> m;

        string x, s;
        cin >> x >> s;

        string cur = x;
        int ans = -1;

        for(int i = 0; i <= 10; i++){
            if(cur.find(s) !=string::npos){
                ans = i;
                break;
            }
            cur += cur;
        }

        cout << ans << '\n';
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
