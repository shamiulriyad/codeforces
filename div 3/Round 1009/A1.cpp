#include <iostream>
using namespace std;

void solve(int tc)
{
    int l, r, d, u;
    cin >> l >> r >> d >> u;
    if (l == r && d == u && l == d)
        cout << "Yes\n";
    else
        cout << "No\n";
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
