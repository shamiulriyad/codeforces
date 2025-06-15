#include <bits/stdc++.h>
using namespace std;

void solve(int tc)
{
    int n,m;
    cin >> n>>m;
    int row1 = -1, row2 = -1;
    int col1 = 1e9, col2 = -1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char ch;
            cin >> ch;
            if(ch=='#' && row1==-1)row1=i+1;
            if(ch=='#') row2=i+1;
            if(ch=='#'&& col1>j+1)col1=j+1;
            if(ch=='#' && col2<j+1)col2=j+1;
            
        }
    }
    int x = (row1 + row2) / 2;
    int y = (col1 + col2) / 2;
    cout << x << ' ' << y << endl;
   
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
