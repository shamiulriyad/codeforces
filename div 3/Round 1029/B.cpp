#include <bits/stdc++.h>
using namespace std;

void solve(int tc)
{
 int n;
        cin >> n;

        vector<int> p(n);
        int left = 0, right = n - 1;
        int cur = 1;
        while (left <= right) {
            if (cur % 2 == 1)
                p[left++] = cur;
            else
                p[right--] = cur;
            cur++;
        }

        for (int i = 0; i < n; i++) {
            cout << p[i] << " ";
        }
        cout << "\n";
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
